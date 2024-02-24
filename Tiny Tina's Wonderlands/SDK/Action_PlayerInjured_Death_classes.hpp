#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass Action_PlayerInjured_Death.Action_PlayerInjured_Death_C
class UAction_PlayerInjured_Death_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class AOakPlayerController*                  PlayerController;                                  // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_PlayerInjured_Death_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_PlayerInjured_Death(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class UGbxAction* CallFunc_K2Play_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsLocalPlayerController_ReturnValue);
};

}


