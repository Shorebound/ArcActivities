// 2017-2018 Puny Human Games

#include "DataModel/ArcActivityTask_Base.h"
#include "DataModel/ArcActivity.h"
#include "ArcActivityInstance.h"



UArcActivityTask_Base::UArcActivityTask_Base(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}
UWorld *UArcActivityTask_Base::GetWorld() const
{
    if(UArcActivityInstance* Instance = GetActivityInstance())
	{
		return Instance->GetWorld();
	}
	return nullptr;
}

UArcActivityInstance* UArcActivityTask_Base::GetActivityInstance() const
{
	return GetTypedOuter<UArcActivityInstance>();
}

UArcActivity* UArcActivityTask_Base::GetActivityAsset() const
{
	return ActivityAsset;
}
