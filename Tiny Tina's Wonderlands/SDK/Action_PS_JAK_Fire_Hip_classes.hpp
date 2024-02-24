#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_PS_JAK_Fire_Hip.Action_PS_JAK_Fire_Hip_C
class UAction_PS_JAK_Fire_Hip_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_PS_JAK_Fire_Hip_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void PlayOffhandAction();
	void ExecuteUbergraph_Action_PS_JAK_Fire_Hip(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class UGbxAction* CallFunc_K2Play_ReturnValue, class AActor* K2Node_Event_Actor1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue1, bool CallFunc_IsCastingSpell_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


