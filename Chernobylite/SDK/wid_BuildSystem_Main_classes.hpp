#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_Main.wid_BuildSystem_Main_C
class UWid_BuildSystem_Main_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_BuildSystem_Building_C*           Building;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_BuildSystem_Edititng_C*           Edititng;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ToolTipPosition;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Abp_BuildSystem_C*                     Owner;                                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TScriptInterface<class Ibi_BuildSystemUIState_C> CurrentState;                                      // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            Exit;                                              // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_Main_C* GetDefaultObj();

	void GetEnterButtons(class UWid_MainMenu_Buttons_Entry_C** EnterBuilding, class UWid_MainMenu_Buttons_Entry_C** EnterEditing, class UWid_MainMenu_Buttons_Entry_C** EnterBuildingGamepad);
	void GetBackButtons(class UWid_MainMenu_Buttons_Entry_C** BackBuilding, class UWid_MainMenu_Buttons_Entry_C** BackEditing, class UWid_MainMenu_Buttons_Entry_C** BackBuildingGamepad);
	void SetBuildingButtonState(bool bInIsEnabled, bool IsInit, bool PlayAnim, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterBuilding, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterEditing, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterBuildingGamepad);
	void SetBackButtonsState(bool bInIsEnabled, bool IsInit, bool PlayAnim, enum class EUMGSequencePlayMode Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackBuilding, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackEditing, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackBuildingGamepad, enum class EUMGSequencePlayMode K2Node_Select_Default);
	void GetIsInItems(bool* IsInItems);
	void ChangeState(TScriptInterface<class Ibi_BuildSystemUIState_C> NewState);
	void Construct();
	void InputFaceLeft();
	void InputFaceUp();
	void InputFaceRight();
	void InputDPadUp();
	void InputDPadRight();
	void InputDPadDown();
	void InputDPadLeft();
	void InputFaceDown();
	void InputL1();
	void InputR1();
	void ShouldCloseEvent();
	void GoToEditModeEvent();
	void GoBackEvent();
	void ShowCatalogs(bool Show);
	void MoveLeftCatalogs();
	void MoveRightCatalogs();
	void MoveUpCatalogs();
	void MoveDownCatalogs();
	void Destruct();
	void BPItemScrap();
	void SetBackInputEnabled(bool IsEnabled);
	void SetEnterActionEnabled(bool IsEnabled);
	void StopAnimBackButton();
	void StopEnterButtonAnim();
	void ExecuteUbergraph_wid_BuildSystem_Main(int32 EntryPoint, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool K2Node_CustomEvent_Show, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadLeft_self_CastInput, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadRight_self_CastInput, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadUp_self_CastInput, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadDown_self_CastInput, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool K2Node_CustomEvent_IsEnabled_1, bool K2Node_CustomEvent_IsEnabled, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackBuilding, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackEditing, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackBuildingGamepad, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterBuilding, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterEditing, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterBuildingGamepad, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD_1);
	void Exit__DelegateSignature();
};

}


