#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x120 - 0x110)
// BlueprintGeneratedClass BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C
class UBP_UIProjectionComponent_GraveStone_C : public UBP_UIProjectionComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Gravestone_C*                      Gravestone;                                        // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UIProjectionComponent_GraveStone_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void PlayerStateUpdated();
	void ExecuteUbergraph_BP_UIProjectionComponent_GraveStone(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABP_Gravestone_C* K2Node_DynamicCast_AsBP_Gravestone, bool K2Node_DynamicCast_bSuccess);
};

}


