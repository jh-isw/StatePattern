/*
 * PausedState.h
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#ifndef PAUSEDSTATE_H_
#define PAUSEDSTATE_H_

#include "MusicPlayerState.h"

class MusicPlayer;

class PausedState : public MusicPlayerState {
public:
	PausedState();
	virtual ~PausedState();

	virtual void Play(MusicPlayer * player) override;
	virtual void Stop(MusicPlayer * player) override;
};

#endif /* PAUSEDSTATE_H_ */
