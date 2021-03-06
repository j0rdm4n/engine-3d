#ifndef NODELESSMODEL_H_
#define NODELESSMODEL_H_

#include "C3DModel.h"
#include "C3DNode.h"

namespace cocos3d
{
/**
 * Defines a model which doesn't have skin mesh.
 */
class C3DSkinlessModel : public C3DModel
{
public:

    C3DSkinlessModel();

    ~C3DSkinlessModel();

	static C3DModel* create();

	//void draw();

	virtual std::string getDefaultMaterialName();

	virtual C3DModel* clone(C3DNode::CloneContext& context) const;

private:
};

}

#endif
