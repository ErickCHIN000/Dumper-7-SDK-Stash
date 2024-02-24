#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SimpleProceduralWalk.SimpleProceduralWalkInterface
class ISimpleProceduralWalkInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISimpleProceduralWalkInterface* GetDefaultObj();

	void OnGroupUp(int32 GroupIndex, const struct FVector& AverageFeetLocation);
	void OnGroupDown(int32 GroupIndex, const struct FVector& AverageFeetLocation);
	void OnFootUp(int32 LegIndex, class FName TipBone, const struct FVector& FootLocation);
	void OnFootDown(int32 LegIndex, class FName TipBone, const struct FVector& FootLocation);
};

}


