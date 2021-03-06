#include <rose.h>
#include <BinaryConcolic.h>
#if defined(ROSE_ENABLE_CONCOLIC_TESTING) && defined(ROSE_HAVE_SQLITE3)

#ifndef DB_URL
#define DB_URL "sqlite://testOpenDb.db"
#endif

using namespace Rose::BinaryAnalysis::Concolic;

int main() {
    auto db = Database::create(DB_URL, "ls-family");
    ASSERT_always_not_null(db);
}

#else

#include <iostream>
int main() {
    std::cerr <<"concolic testing is not enabled\n";
}

#endif
