/*
 * Trainer.h
 *
 *  Created on: 6 Jan 2016
 *      Author: Zeyi Wen
 *      @brief: GBDT trainer
 */

#ifndef TRAINER_H_
#define TRAINER_H_

#include "../DeviceHost/BaseClasses/BaseTrainer.h"
#include "UpdateOps/HostSplitter.h"

class HostTrainer: public BaseTrainer
{
public:
	HostTrainer(HostSplitter *pHSpliter):BaseTrainer(pHSpliter){}
	virtual ~HostTrainer(){}
	virtual void ReleaseTree(vector<RegTree> &v_Tree);
protected:
	virtual void InitTree(RegTree &tree);
	virtual void GrowTree(RegTree &tree, void *pStream, int bagId);
};



#endif /* TRAINER_H_ */
