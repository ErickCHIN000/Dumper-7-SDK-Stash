#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7B0 - 0x7A8)
// BlueprintGeneratedClass BP_Fortification_Wood_Wall.BP_Fortification_Wood_Wall_C
class ABP_Fortification_Wood_Wall_C : public ABP_Fortification_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Fortification_Wood_Wall_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Fortification_Wood_Wall(int32 EntryPoint);
};

}


