#include "MusicPlayer.h"
#include "gtest/gtest.h"
#include <string>

class PlayerFixture : public testing::Test {
  public:
    void SetUp() override {
      player = new MusicPlayer();
    }

    void TearDown() override {
      delete player;
    }

  MusicPlayer *player;
};

TEST_F(PlayerFixture, TestName) {
  ASSERT_STREQ("Stopped", player->GetState().c_str());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}