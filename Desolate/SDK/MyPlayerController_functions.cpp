#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MyPlayerController.MyPlayerController_C
// (Actor, PlayerController)

class UClass* AMyPlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MyPlayerController_C");

	return Clss;
}


// MyPlayerController_C MyPlayerController.Default__MyPlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMyPlayerController_C* AMyPlayerController_C::GetDefaultObj()
{
	static class AMyPlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMyPlayerController_C*>(AMyPlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MyPlayerController.MyPlayerController_C.CanShowIngameMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_CharInventory_C>CallFunc_GetHudWidget_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IPlayerHUDInterface_C>CallFunc_GetHudWidget_HUDInterface                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUD_v2_C*             K2Node_DynamicCast_AsPlayer_HUD_V_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUnderControlEffect_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyPlayerController_C::CanShowIngameMenu(bool* Result, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_CharInventory_C> CallFunc_GetHudWidget_self_CastInput, TScriptInterface<class IPlayerHUDInterface_C> CallFunc_GetHudWidget_HUDInterface, class UPlayerHUD_v2_C* K2Node_DynamicCast_AsPlayer_HUD_V_2, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsUnderControlEffect_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "CanShowIngameMenu");

	Params::AMyPlayerController_C_CanShowIngameMenu_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Character = K2Node_DynamicCast_AsGeneric_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHudWidget_self_CastInput = CallFunc_GetHudWidget_self_CastInput;
	Parms.CallFunc_GetHudWidget_HUDInterface = CallFunc_GetHudWidget_HUDInterface;
	Parms.K2Node_DynamicCast_AsPlayer_HUD_V_2 = K2Node_DynamicCast_AsPlayer_HUD_V_2;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsUnderControlEffect_ReturnValue = CallFunc_IsUnderControlEffect_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MyPlayerController.MyPlayerController_C.GiveAchevementName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAchievement            Achievement                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAchievementName_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAchievementName_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyPlayerController_C::GiveAchevementName(enum class EAchievement Achievement, class FName* Name, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetAchievementName_ReturnValue, class FName CallFunc_GetAchievementName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "GiveAchevementName");

	Params::AMyPlayerController_C_GiveAchevementName_Params Parms{};

	Parms.Achievement = Achievement;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAchievementName_ReturnValue = CallFunc_GetAchievementName_ReturnValue;
	Parms.CallFunc_GetAchievementName_ReturnValue_1 = CallFunc_GetAchievementName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function MyPlayerController.MyPlayerController_C.ShowSaveEditor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveEditorWidget_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyPlayerController_C::ShowSaveEditor(class USaveEditorWidget_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "ShowSaveEditor");

	Params::AMyPlayerController_C_ShowSaveEditor_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.ToggleIngameMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanShowIngameMenu_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSingleplayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSingleplayer_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CharInventory_C>K2Node_DynamicCast_AsBPI_Char_Inventory                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_CharInventory_C>K2Node_DynamicCast_AsBPI_Char_Inventory_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUIInterface_C>CallFunc_BPI_Get_Character_UI_CharacterUI                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IPlayerHUDInterface_C>CallFunc_GetHudWidget_HUDInterface                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CharInventory_C>K2Node_DynamicCast_AsBPI_Char_Inventory_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IPlayerHUDInterface_C>CallFunc_GetHudWidget_HUDInterface_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyPlayerController_C::ToggleIngameMenu(bool CallFunc_CanShowIngameMenu_Result, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_IsSingleplayer_ReturnValue, bool CallFunc_IsSingleplayer_ReturnValue_1, bool CallFunc_SetGamePaused_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class ICharacterUIInterface_C> CallFunc_BPI_Get_Character_UI_CharacterUI, TScriptInterface<class IPlayerHUDInterface_C> CallFunc_GetHudWidget_HUDInterface, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IPlayerHUDInterface_C> CallFunc_GetHudWidget_HUDInterface_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "ToggleIngameMenu");

	Params::AMyPlayerController_C_ToggleIngameMenu_Params Parms{};

	Parms.CallFunc_CanShowIngameMenu_Result = CallFunc_CanShowIngameMenu_Result;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_IsSingleplayer_ReturnValue = CallFunc_IsSingleplayer_ReturnValue;
	Parms.CallFunc_IsSingleplayer_ReturnValue_1 = CallFunc_IsSingleplayer_ReturnValue_1;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Char_Inventory = K2Node_DynamicCast_AsBPI_Char_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Char_Inventory_1 = K2Node_DynamicCast_AsBPI_Char_Inventory_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BPI_Get_Character_UI_CharacterUI = CallFunc_BPI_Get_Character_UI_CharacterUI;
	Parms.CallFunc_GetHudWidget_HUDInterface = CallFunc_GetHudWidget_HUDInterface;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Char_Inventory_2 = K2Node_DynamicCast_AsBPI_Char_Inventory_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetHudWidget_HUDInterface_1 = CallFunc_GetHudWidget_HUDInterface_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.InpActEvt_Menu_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMyPlayerController_C::InpActEvt_Menu_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "InpActEvt_Menu_K2Node_InputActionEvent_0");

	Params::AMyPlayerController_C_InpActEvt_Menu_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.InpActEvt_X_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMyPlayerController_C::InpActEvt_X_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "InpActEvt_X_K2Node_InputKeyEvent_2");

	Params::AMyPlayerController_C_InpActEvt_X_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.InpActEvt_Divide_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMyPlayerController_C::InpActEvt_Divide_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "InpActEvt_Divide_K2Node_InputKeyEvent_1");

	Params::AMyPlayerController_C_InpActEvt_Divide_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.OnFailure_5BA0F2AB4E4603A773DD7ABE4B45415E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnFailure_5BA0F2AB4E4603A773DD7ABE4B45415E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnFailure_5BA0F2AB4E4603A773DD7ABE4B45415E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnSuccess_5BA0F2AB4E4603A773DD7ABE4B45415E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnSuccess_5BA0F2AB4E4603A773DD7ABE4B45415E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSuccess_5BA0F2AB4E4603A773DD7ABE4B45415E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnFailure_B13294CE4E38A5F788FDDC98189A9599
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WrittenAchievementName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WrittenProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WrittenUserTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyPlayerController_C::OnFailure_B13294CE4E38A5F788FDDC98189A9599(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnFailure_B13294CE4E38A5F788FDDC98189A9599");

	Params::AMyPlayerController_C_OnFailure_B13294CE4E38A5F788FDDC98189A9599_Params Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.OnSuccess_B13294CE4E38A5F788FDDC98189A9599
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WrittenAchievementName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WrittenProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WrittenUserTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyPlayerController_C::OnSuccess_B13294CE4E38A5F788FDDC98189A9599(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSuccess_B13294CE4E38A5F788FDDC98189A9599");

	Params::AMyPlayerController_C_OnSuccess_B13294CE4E38A5F788FDDC98189A9599_Params Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.OnFailure_90342F7D4695F8237726D3BA7F33F0F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WrittenAchievementName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WrittenProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WrittenUserTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyPlayerController_C::OnFailure_90342F7D4695F8237726D3BA7F33F0F0(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnFailure_90342F7D4695F8237726D3BA7F33F0F0");

	Params::AMyPlayerController_C_OnFailure_90342F7D4695F8237726D3BA7F33F0F0_Params Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.OnSuccess_90342F7D4695F8237726D3BA7F33F0F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WrittenAchievementName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WrittenProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WrittenUserTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyPlayerController_C::OnSuccess_90342F7D4695F8237726D3BA7F33F0F0(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSuccess_90342F7D4695F8237726D3BA7F33F0F0");

	Params::AMyPlayerController_C_OnSuccess_90342F7D4695F8237726D3BA7F33F0F0_Params Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.OnFailure_0FB1B67B41C554A63FEAC1AE6349534C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnFailure_0FB1B67B41C554A63FEAC1AE6349534C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnFailure_0FB1B67B41C554A63FEAC1AE6349534C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnSuccess_0FB1B67B41C554A63FEAC1AE6349534C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnSuccess_0FB1B67B41C554A63FEAC1AE6349534C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSuccess_0FB1B67B41C554A63FEAC1AE6349534C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnFailure_36C83EC44DC300DB1AEF0A9C1C3071FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnFailure_36C83EC44DC300DB1AEF0A9C1C3071FF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnFailure_36C83EC44DC300DB1AEF0A9C1C3071FF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnSuccess_36C83EC44DC300DB1AEF0A9C1C3071FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnSuccess_36C83EC44DC300DB1AEF0A9C1C3071FF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSuccess_36C83EC44DC300DB1AEF0A9C1C3071FF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnFailure_E16C9D0A43F4F5C181281EBBC42D7995
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnFailure_E16C9D0A43F4F5C181281EBBC42D7995()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnFailure_E16C9D0A43F4F5C181281EBBC42D7995");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnSuccess_E16C9D0A43F4F5C181281EBBC42D7995
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnSuccess_E16C9D0A43F4F5C181281EBBC42D7995()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSuccess_E16C9D0A43F4F5C181281EBBC42D7995");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMyPlayerController_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_0");

	Params::AMyPlayerController_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.OnFailure_5BA50BD94E554C9D0787D1BE1D917C45
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnFailure_5BA50BD94E554C9D0787D1BE1D917C45()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnFailure_5BA50BD94E554C9D0787D1BE1D917C45");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnSuccess_5BA50BD94E554C9D0787D1BE1D917C45
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnSuccess_5BA50BD94E554C9D0787D1BE1D917C45()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSuccess_5BA50BD94E554C9D0787D1BE1D917C45");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnFailure_96566A34459B20C8953AC1B08A20608C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnFailure_96566A34459B20C8953AC1B08A20608C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnFailure_96566A34459B20C8953AC1B08A20608C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnSuccess_96566A34459B20C8953AC1B08A20608C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnSuccess_96566A34459B20C8953AC1B08A20608C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSuccess_96566A34459B20C8953AC1B08A20608C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.ShowDeathScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::ShowDeathScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "ShowDeathScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.ShowDeathTimerScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::ShowDeathTimerScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "ShowDeathTimerScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.HideDeathTimerScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::HideDeathTimerScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "HideDeathTimerScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.GiveAchievementEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAchievement            Achievement                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyPlayerController_C::GiveAchievementEvent(enum class EAchievement Achievement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "GiveAchievementEvent");

	Params::AMyPlayerController_C_GiveAchievementEvent_Params Parms{};

	Parms.Achievement = Achievement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.ProcessNextAchievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::ProcessNextAchievement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "ProcessNextAchievement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnSessionInviteAccepted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSHUniqueNetId              PersonInviting                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult     SearchResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMyPlayerController_C::OnSessionInviteAccepted(const struct FSHUniqueNetId& PersonInviting, struct FBlueprintSessionResult& SearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSessionInviteAccepted");

	Params::AMyPlayerController_C_OnSessionInviteAccepted_Params Parms{};

	Parms.PersonInviting = PersonInviting;
	Parms.SearchResult = SearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.TryAddAchievment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Attempt                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyPlayerController_C::TryAddAchievment(class FName Name, int32 Attempt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "TryAddAchievment");

	Params::AMyPlayerController_C_TryAddAchievment_Params Parms{};

	Parms.Name = Name;
	Parms.Attempt = Attempt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.ResetAchievements
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::ResetAchievements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "ResetAchievements");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.SynchronizePlatinumEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::SynchronizePlatinumEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "SynchronizePlatinumEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.EventOnLostFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::EventOnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "EventOnLostFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.AchievementEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyPlayerController_C::AchievementEvent(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "AchievementEvent");

	Params::AMyPlayerController_C_AchievementEvent_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.OnTabReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyPlayerController_C::OnTabReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnTabReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyPlayerController.MyPlayerController_C.OnBanned
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        BanReason                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMyPlayerController_C::OnBanned(class FText& BanReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnBanned");

	Params::AMyPlayerController_C_OnBanned_Params Parms{};

	Parms.BanReason = BanReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.OnSessionInviteReceived
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              LocalPlayerNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHUniqueNetId              PersonInviting                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      AppId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     SessionToJoin                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMyPlayerController_C::OnSessionInviteReceived(int32 LocalPlayerNum, const struct FSHUniqueNetId& PersonInviting, const class FString& AppId, struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "OnSessionInviteReceived");

	Params::AMyPlayerController_C_OnSessionInviteReceived_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.PersonInviting = PersonInviting;
	Parms.AppId = AppId;
	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyPlayerController.MyPlayerController_C.ExecuteUbergraph_MyPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_WrittenAchievementName_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WrittenProgress_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WrittenUserTag_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_WrittenAchievementName_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WrittenProgress_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WrittenUserTag_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_WrittenAchievementName                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WrittenProgress                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WrittenUserTag                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UNotificationWindow_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CharInventory_C>K2Node_DynamicCast_AsBPI_Char_Inventory                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUIInterface_C>K2Node_DynamicCast_AsCharacter_UIInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IPlayerHUDInterface_C>CallFunc_GetHudWidget_HUDInterface                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIngameMenuRoot_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CharInventory_C>K2Node_DynamicCast_AsBPI_Char_Inventory_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUIInterface_C>K2Node_DynamicCast_AsCharacter_UIInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IPlayerHUDInterface_C>CallFunc_GetHudWidget_HUDInterface_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CharInventory_C>K2Node_DynamicCast_AsBPI_Char_Inventory_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IPlayerHUDInterface_C>CallFunc_GetHudWidget_HUDInterface_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWithEditor_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAchievement            K2Node_Event_Achievement                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// class UAchievementQueryCallbackProxy*CallFunc_CacheAchievements_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAchievement            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_WrittenAchievementName_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WrittenProgress_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WrittenUserTag_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHUniqueNetId              K2Node_Event_PersonInviting_1                                    (None)
// struct FBlueprintSessionResult     K2Node_Event_SearchResult                                        (ConstParm)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Name_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Attempt                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAchievementQueryCallbackProxy*CallFunc_CacheAchievements_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAchievementWriteCallbackProxy*CallFunc_WriteAchievementProgress_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAchievementQueryCallbackProxy*CallFunc_CacheAchievements_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAchievementQueryCallbackProxy*CallFunc_CacheAchievements_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAchievementName_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCachedAchievementProgress_bFoundID                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCachedAchievementProgress_Progress                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDeathTimerWidget_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithEditor_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLoadingState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_BanReason                                           (ConstParm)
// class UDeathScreenWidget_C*        CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GiveAchevementName_Name                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAchievementWriteCallbackProxy*CallFunc_WriteAchievementProgress_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCachedAchievementProgress_bFoundID_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCachedAchievementProgress_Progress_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_LocalPlayerNum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHUniqueNetId              K2Node_Event_PersonInviting                                      (None)
// class FString                      K2Node_Event_AppId                                               (ZeroConstructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     K2Node_Event_SessionToJoin                                       (ConstParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyPlayerController_C::ExecuteUbergraph_MyPlayerController(int32 EntryPoint, class FName K2Node_CustomEvent_WrittenAchievementName_2, float K2Node_CustomEvent_WrittenProgress_2, int32 K2Node_CustomEvent_WrittenUserTag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, float Temp_float_Variable, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_WrittenAchievementName_1, float K2Node_CustomEvent_WrittenProgress_1, int32 K2Node_CustomEvent_WrittenUserTag_1, class FName K2Node_CustomEvent_WrittenAchievementName, float K2Node_CustomEvent_WrittenProgress, int32 K2Node_CustomEvent_WrittenUserTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_1, float Temp_float_Variable_1, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UNotificationWindow_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_IsLocalPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUIInterface_C> K2Node_DynamicCast_AsCharacter_UIInterface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IPlayerHUDInterface_C> CallFunc_GetHudWidget_HUDInterface, bool CallFunc_IsValid_ReturnValue, class UIngameMenuRoot_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class ICharacterUIInterface_C> K2Node_DynamicCast_AsCharacter_UIInterface_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IPlayerHUDInterface_C> CallFunc_GetHudWidget_HUDInterface_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory_2, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, TScriptInterface<class IPlayerHUDInterface_C> CallFunc_GetHudWidget_HUDInterface_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsWithEditor_ReturnValue, bool CallFunc_IsWithEditor_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_BooleanOR_ReturnValue, enum class EAchievement K2Node_Event_Achievement, const struct FKey& K2Node_InputKeyEvent_Key_2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, enum class EAchievement CallFunc_Array_Get_Item, class FName K2Node_CustomEvent_WrittenAchievementName_3, float K2Node_CustomEvent_WrittenProgress_3, int32 K2Node_CustomEvent_WrittenUserTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FSHUniqueNetId& K2Node_Event_PersonInviting_1, const struct FBlueprintSessionResult& K2Node_Event_SearchResult, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_5, class FName K2Node_CustomEvent_Name_1, int32 K2Node_CustomEvent_Attempt, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, class UAchievementWriteCallbackProxy* CallFunc_WriteAchievementProgress_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_6, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_8, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_BooleanAND_ReturnValue_1, class FName CallFunc_GetAchievementName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_GetCachedAchievementProgress_bFoundID, float CallFunc_GetCachedAchievementProgress_Progress, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class UDeathTimerWidget_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsWithEditor_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_2, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsInLoadingState_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, class FName K2Node_CustomEvent_Name, bool CallFunc_BooleanAND_ReturnValue_3, class FText K2Node_Event_BanReason, class UDeathScreenWidget_C* CallFunc_Create_ReturnValue_3, class FName CallFunc_GiveAchevementName_Name, class UAchievementWriteCallbackProxy* CallFunc_WriteAchievementProgress_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_GetCachedAchievementProgress_bFoundID_1, float CallFunc_GetCachedAchievementProgress_Progress_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_7, int32 CallFunc_MakeLiteralInt_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, int32 Temp_int_Variable_4, int32 K2Node_Event_LocalPlayerNum, const struct FSHUniqueNetId& K2Node_Event_PersonInviting, const class FString& K2Node_Event_AppId, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyPlayerController_C", "ExecuteUbergraph_MyPlayerController");

	Params::AMyPlayerController_C_ExecuteUbergraph_MyPlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_WrittenAchievementName_2 = K2Node_CustomEvent_WrittenAchievementName_2;
	Parms.K2Node_CustomEvent_WrittenProgress_2 = K2Node_CustomEvent_WrittenProgress_2;
	Parms.K2Node_CustomEvent_WrittenUserTag_2 = K2Node_CustomEvent_WrittenUserTag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_WrittenAchievementName_1 = K2Node_CustomEvent_WrittenAchievementName_1;
	Parms.K2Node_CustomEvent_WrittenProgress_1 = K2Node_CustomEvent_WrittenProgress_1;
	Parms.K2Node_CustomEvent_WrittenUserTag_1 = K2Node_CustomEvent_WrittenUserTag_1;
	Parms.K2Node_CustomEvent_WrittenAchievementName = K2Node_CustomEvent_WrittenAchievementName;
	Parms.K2Node_CustomEvent_WrittenProgress = K2Node_CustomEvent_WrittenProgress;
	Parms.K2Node_CustomEvent_WrittenUserTag = K2Node_CustomEvent_WrittenUserTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Char_Inventory = K2Node_DynamicCast_AsBPI_Char_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCharacter_UIInterface = K2Node_DynamicCast_AsCharacter_UIInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetHudWidget_HUDInterface = CallFunc_GetHudWidget_HUDInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Char_Inventory_1 = K2Node_DynamicCast_AsBPI_Char_Inventory_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsCharacter_UIInterface_1 = K2Node_DynamicCast_AsCharacter_UIInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetHudWidget_HUDInterface_1 = CallFunc_GetHudWidget_HUDInterface_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Char_Inventory_2 = K2Node_DynamicCast_AsBPI_Char_Inventory_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_GetHudWidget_HUDInterface_2 = CallFunc_GetHudWidget_HUDInterface_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.CallFunc_IsWithEditor_ReturnValue_1 = CallFunc_IsWithEditor_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_Achievement = K2Node_Event_Achievement;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_CacheAchievements_ReturnValue = CallFunc_CacheAchievements_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_WrittenAchievementName_3 = K2Node_CustomEvent_WrittenAchievementName_3;
	Parms.K2Node_CustomEvent_WrittenProgress_3 = K2Node_CustomEvent_WrittenProgress_3;
	Parms.K2Node_CustomEvent_WrittenUserTag_3 = K2Node_CustomEvent_WrittenUserTag_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_Event_PersonInviting_1 = K2Node_Event_PersonInviting_1;
	Parms.K2Node_Event_SearchResult = K2Node_Event_SearchResult;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_Name_1 = K2Node_CustomEvent_Name_1;
	Parms.K2Node_CustomEvent_Attempt = K2Node_CustomEvent_Attempt;
	Parms.CallFunc_CacheAchievements_ReturnValue_1 = CallFunc_CacheAchievements_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_WriteAchievementProgress_ReturnValue = CallFunc_WriteAchievementProgress_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_CacheAchievements_ReturnValue_2 = CallFunc_CacheAchievements_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_CacheAchievements_ReturnValue_3 = CallFunc_CacheAchievements_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGeneric_Character = K2Node_DynamicCast_AsGeneric_Character;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetAchievementName_ReturnValue = CallFunc_GetAchievementName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetCachedAchievementProgress_bFoundID = CallFunc_GetCachedAchievementProgress_bFoundID;
	Parms.CallFunc_GetCachedAchievementProgress_Progress = CallFunc_GetCachedAchievementProgress_Progress;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_IsWithEditor_ReturnValue_2 = CallFunc_IsWithEditor_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character_1 = K2Node_DynamicCast_AsSHPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_IsInLoadingState_ReturnValue = CallFunc_IsInLoadingState_ReturnValue;
	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_Event_BanReason = K2Node_Event_BanReason;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_GiveAchevementName_Name = CallFunc_GiveAchevementName_Name;
	Parms.CallFunc_WriteAchievementProgress_ReturnValue_1 = CallFunc_WriteAchievementProgress_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetCachedAchievementProgress_bFoundID_1 = CallFunc_GetCachedAchievementProgress_bFoundID_1;
	Parms.CallFunc_GetCachedAchievementProgress_Progress_1 = CallFunc_GetCachedAchievementProgress_Progress_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.K2Node_Event_LocalPlayerNum = K2Node_Event_LocalPlayerNum;
	Parms.K2Node_Event_PersonInviting = K2Node_Event_PersonInviting;
	Parms.K2Node_Event_AppId = K2Node_Event_AppId;
	Parms.K2Node_Event_SessionToJoin = K2Node_Event_SessionToJoin;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

}

}


