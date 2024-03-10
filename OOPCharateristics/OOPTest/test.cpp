#include "pch.h"
#include "AccessModifier.h"
#include "OverLoadingAndOverwriting.h"

namespace {
	TEST(AccessModifier, BaseClass) {
		CBaseUser user;
		EXPECT_EQ(user.id, 0);
		EXPECT_TRUE(true);
	}

	TEST(AccessModifier, PublicClass) {
		CPublicUser user;
		EXPECT_EQ(user.id, 0);
		EXPECT_TRUE(true);
	}

	TEST(AccessModifier, ProtectedClass) {
		CProtectedUser user;
		user.CallMethod();
		EXPECT_EQ(user.GetId(), 1);
		EXPECT_TRUE(true);
	}

	TEST(OverLoading, Square) {
		COverBase obj;
		EXPECT_EQ(obj.Square(2), 4);
		EXPECT_FLOAT_EQ(obj.Square(float(2.0)), 4.0);
	}
}
