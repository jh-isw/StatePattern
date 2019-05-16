#include "MusicPlayer.h"
#include "gtest/gtest.h"
#include <string>
//#include <iostream>

class PlayerFixture : public testing::Test {
  protected:
    void SetUp() override {
      player = new MusicPlayer();
      //std::cout << "SetUp" << std::endl;
    }

    void TearDown() override {
      delete player;
      //std::cout << "TearDown" << std::endl;
    }

  MusicPlayer *player;
};

TEST_F(PlayerFixture, InitialStateIsStopped) {
  ASSERT_STREQ("Stopped", player->GetState().c_str());
}

TEST_F(PlayerFixture, StoppedToPausedNotHappening){
  player->Pause();
  ASSERT_STREQ("Stopped", player->GetState().c_str());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}