#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7B8 - 0x7B0)
// BlueprintGeneratedClass BP_Window_Curtain_Leather.BP_Window_Curtain_Leather_C
class ABP_Window_Curtain_Leather_C : public ABP_Window_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Window_Curtain_Leather_C* GetDefaultObj();

	void SetOpenableStateOnFoundationActor(bool Temp_bool_Variable, class UPhysicsAsset* Temp_object_Variable, class UPhysicsAsset* Temp_object_Variable_1, class UPhysicsAsset* K2Node_Select_Default);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Window_Curtain_Leather(int32 EntryPoint);
};

}


