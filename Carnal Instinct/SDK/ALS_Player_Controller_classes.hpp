#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x5C8 - 0x570)
// BlueprintGeneratedClass ALS_Player_Controller.ALS_Player_Controller_C
class AALS_Player_Controller_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Ubp_notification_component_C*          bp_notification_component;                         // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_msl_system_component_C*            bp_msl_system_component;                           // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            DebugFocusCharacter;                               // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacter*>                    AvailableDebugCharacters;                          // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         ShowHUD;                                           // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugView;                                         // 0x5A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowTraces;                                        // 0x5A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowDebugShapes;                                   // 0x5A3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowLayerColors;                                   // 0x5A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowCharacterInfo;                                 // 0x5A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1818[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UALS_HUD_C*                            ALS_HUD;                                           // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlayStateSwitcher_C*               OverlaySwitcher;                                   // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverlayMenuOpen;                                   // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Slomo;                                             // 0x5B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GamepadControls;                                   // 0x5BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_182B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       InventoryComponent;                                // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AALS_Player_Controller_C* GetDefaultObj();

	void BPI_Get_DebugInfo(class ACharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveBeginPlay();
	void Initialize_AC_Inventory();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_3(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_4(float AxisValue);
	void EventInteractWithNPC(class UComp_NPC_Controller_C* NPC_Controller, class APawn* Player_Pawn);
	void ExecuteUbergraph_ALS_Player_Controller(int32 EntryPoint, TArray<class AALS_Base_CharacterBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class APawn* K2Node_Event_PossessedPawn, class AALS_PlayerCameraManager_C* K2Node_DynamicCast_AsALS_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, float K2Node_InputAxisKeyEvent_AxisValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_InputAxisKeyEvent_AxisValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UComp_NPC_Controller_C* K2Node_CustomEvent_NPC_Controller, class APawn* K2Node_CustomEvent_Player_Pawn, const struct FKey& K2Node_InputKeyEvent_Key, TScriptInterface<class IBPI_NPC_Interaction_C> K2Node_DynamicCast_AsBPI_NPC_Interaction, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Key_IsGamepadKey_ReturnValue);
};

}


