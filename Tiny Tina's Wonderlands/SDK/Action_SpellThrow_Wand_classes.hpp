#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// BlueprintGeneratedClass Action_SpellThrow_Wand.Action_SpellThrow_Wand_C
class UAction_SpellThrow_Wand_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_SpellThrow_Wand_C* GetDefaultObj();

	void OnServerBegin(class AActor* Actor);
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void AN_ShowWand();
	void AN_HideWand();
	void OnBeginBringUpWeapon(class AActor* Actor);
	void ExecuteUbergraph_Action_SpellThrow_Wand(int32 EntryPoint, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* K2Node_Event_Actor, bool CallFunc_SetPlayerWandVisibility_Res, bool CallFunc_SetPlayerWandVisibility_Res1);
};

}


