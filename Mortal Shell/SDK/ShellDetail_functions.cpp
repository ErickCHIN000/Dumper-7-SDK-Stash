#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShellDetail.ShellDetail_C
// (None)

class UClass* UShellDetail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellDetail_C");

	return Clss;
}


// ShellDetail_C ShellDetail.Default__ShellDetail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellDetail_C* UShellDetail_C::GetDefaultObj()
{
	static class UShellDetail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellDetail_C*>(UShellDetail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellDetail.ShellDetail_C.Get_UI_ShellShade_Entry_Shade_3_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UShellDetail_C::Get_UI_ShellShade_Entry_Shade_3_Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "Get_UI_ShellShade_Entry_Shade_3_Visibility");

	Params::UShellDetail_C_Get_UI_ShellShade_Entry_Shade_3_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShellDetail.ShellDetail_C.Get_VerticalBox_HadernSelectedAbility_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkillObtained_Obtained                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHadernShellSlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHadernShell_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UShellDetail_C::Get_VerticalBox_HadernSelectedAbility_Visibility(bool CallFunc_IsSkillObtained_Obtained, bool CallFunc_IsHadernShellSlot_ReturnValue, bool CallFunc_IsHadernShell_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "Get_VerticalBox_HadernSelectedAbility_Visibility");

	Params::UShellDetail_C_Get_VerticalBox_HadernSelectedAbility_Visibility_Params Parms{};

	Parms.CallFunc_IsSkillObtained_Obtained = CallFunc_IsSkillObtained_Obtained;
	Parms.CallFunc_IsHadernShellSlot_ReturnValue = CallFunc_IsHadernShellSlot_ReturnValue;
	Parms.CallFunc_IsHadernShell_ReturnValue = CallFunc_IsHadernShell_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShellDetail.ShellDetail_C.SetAbilityDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Local_Desc                                                       (Edit, BlueprintVisible)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellDetail_C::SetAbilityDescription(class FText Description, class FText Local_Desc, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsShellNameKnown_bUnlocked, bool CallFunc_IsShellNameKnown_bUnlocked_1, bool CallFunc_IsShellNameKnown_bUnlocked_2, bool CallFunc_IsShellNameKnown_bUnlocked_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "SetAbilityDescription");

	Params::UShellDetail_C_SetAbilityDescription_Params Parms{};

	Parms.Description = Description;
	Parms.Local_Desc = Local_Desc;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsShellNameKnown_bUnlocked = CallFunc_IsShellNameKnown_bUnlocked;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_1 = CallFunc_IsShellNameKnown_bUnlocked_1;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_2 = CallFunc_IsShellNameKnown_bUnlocked_2;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_3 = CallFunc_IsShellNameKnown_bUnlocked_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.SetDyesButtonsRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellDetail_C::SetDyesButtonsRef(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "SetDyesButtonsRef");

	Params::UShellDetail_C_SetDyesButtonsRef_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDyesButtons_Array = CallFunc_GetDyesButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.SetUpgradeButtonsRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetUpgradeButtons_Array                                 (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellDetail_C::SetUpgradeButtonsRef(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetUpgradeButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "SetUpgradeButtonsRef");

	Params::UShellDetail_C_SetUpgradeButtonsRef_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetUpgradeButtons_Array = CallFunc_GetUpgradeButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.OpenDyesTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index_Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::OpenDyesTab(int32 Index_Tab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "OpenDyesTab");

	Params::UShellDetail_C_OpenDyesTab_Params Parms{};

	Parms.Index_Tab = Index_Tab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.GetDyesTabVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UShellDetail_C::GetDyesTabVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "GetDyesTabVisibility");

	Params::UShellDetail_C_GetDyesTabVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShellDetail.ShellDetail_C.GetDyesButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_ShellDetail_Entry_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_ShellDetail_Entry_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UShellDetail_C::GetDyesButtons(TArray<class UUI_ShellDetail_Entry_C*>* Array, TArray<class UUI_ShellDetail_Entry_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "GetDyesButtons");

	Params::UShellDetail_C_GetDyesButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function ShellDetail.ShellDetail_C.PlayHideAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::PlayHideAnim(enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, float* Duration, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "PlayHideAnim");

	Params::UShellDetail_C_PlayHideAnim_Params Parms{};

	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function ShellDetail.ShellDetail_C.SetStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             CurrentArmor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::SetStats(enum class EArmorTypes CurrentArmor, enum class EArmorTypes Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, enum class EArmorTypes Temp_byte_Variable_1, int32 K2Node_Select_Default, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, enum class EArmorTypes Temp_byte_Variable_2, int32 K2Node_Select_Default_1, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, int32 Temp_int_Variable_16, int32 Temp_int_Variable_17, int32 K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "SetStats");

	Params::UShellDetail_C_SetStats_Params Parms{};

	Parms.CurrentArmor = CurrentArmor;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.OpenDescriptionTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index_Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::OpenDescriptionTab(int32 Index_Tab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "OpenDescriptionTab");

	Params::UShellDetail_C_OpenDescriptionTab_Params Parms{};

	Parms.Index_Tab = Index_Tab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.OpenAbilitiesTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index_Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::OpenAbilitiesTab(int32 Index_Tab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "OpenAbilitiesTab");

	Params::UShellDetail_C_OpenAbilitiesTab_Params Parms{};

	Parms.Index_Tab = Index_Tab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.NavSoundHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellDetail_C::NavSoundHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "NavSoundHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellDetail.ShellDetail_C.NavTabUnhover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MainMenu_Button_C*       Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellDetail_C::NavTabUnhover(class UUI_MainMenu_Button_C* Local_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "NavTabUnhover");

	Params::UShellDetail_C_NavTabUnhover_Params Parms{};

	Parms.Local_Button = Local_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.NavTabHover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellDetail_C::NavTabHover(int32 Index, class UUI_MainMenu_Button_C* Local_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "NavTabHover");

	Params::UShellDetail_C_NavTabHover_Params Parms{};

	Parms.Index = Index;
	Parms.Local_Button = Local_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.HoverUpgradeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::HoverUpgradeButton(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "HoverUpgradeButton");

	Params::UShellDetail_C_HoverUpgradeButton_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.SetUpgradeTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Armor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShellName_ShellName                                  (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UShellDetail_C::SetUpgradeTitle(class FText Title, bool Unlocked, enum class EArmorTypes Armor, int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_GetShellName_ShellName, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "SetUpgradeTitle");

	Params::UShellDetail_C_SetUpgradeTitle_Params Parms{};

	Parms.Title = Title;
	Parms.Unlocked = Unlocked;
	Parms.Armor = Armor;
	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetShellName_ShellName = CallFunc_GetShellName_ShellName;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.SetTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UpgradeID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GlimpsesEnough                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TarEnough                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Lore                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Glimpses                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Tar                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Armor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 DescriptionColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               LockedInPressPreview                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_LockedPP                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 Local_Color                                                      (Edit, BlueprintVisible)
// enum class EArmorTypes             Local_Shell                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_Lore                                                       (Edit, BlueprintVisible)
// class FText                        Local_Description                                                (Edit, BlueprintVisible)
// class FText                        Local_Title                                                      (Edit, BlueprintVisible)
// bool                               Local_Glimpses_Enough                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Tar_Enough                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Unlocked                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Tar                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Glimpses                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetCostColor_SlateColor                                 (None)
// struct FSlateColor                 CallFunc_GetCostColor_SlateColor_1                               (None)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::SetTexts(class FName UpgradeID, int32 Index, bool GlimpsesEnough, bool TarEnough, bool Unlocked, class FText Title, class FText Description, class FText Lore, int32 Glimpses, int32 Tar, enum class EArmorTypes Armor, const struct FSlateColor& DescriptionColor, bool LockedInPressPreview, bool Local_LockedPP, const struct FSlateColor& Local_Color, enum class EArmorTypes Local_Shell, class FText Local_Lore, class FText Local_Description, class FText Local_Title, bool Local_Glimpses_Enough, bool Local_Tar_Enough, bool Local_Unlocked, int32 Local_Tar, int32 Local_Glimpses, int32 Local_Index, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_4, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSlateColor& CallFunc_GetCostColor_SlateColor, const struct FSlateColor& CallFunc_GetCostColor_SlateColor_1, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "SetTexts");

	Params::UShellDetail_C_SetTexts_Params Parms{};

	Parms.UpgradeID = UpgradeID;
	Parms.Index = Index;
	Parms.GlimpsesEnough = GlimpsesEnough;
	Parms.TarEnough = TarEnough;
	Parms.Unlocked = Unlocked;
	Parms.Title = Title;
	Parms.Description = Description;
	Parms.Lore = Lore;
	Parms.Glimpses = Glimpses;
	Parms.Tar = Tar;
	Parms.Armor = Armor;
	Parms.DescriptionColor = DescriptionColor;
	Parms.LockedInPressPreview = LockedInPressPreview;
	Parms.Local_LockedPP = Local_LockedPP;
	Parms.Local_Color = Local_Color;
	Parms.Local_Shell = Local_Shell;
	Parms.Local_Lore = Local_Lore;
	Parms.Local_Description = Local_Description;
	Parms.Local_Title = Local_Title;
	Parms.Local_Glimpses_Enough = Local_Glimpses_Enough;
	Parms.Local_Tar_Enough = Local_Tar_Enough;
	Parms.Local_Unlocked = Local_Unlocked;
	Parms.Local_Tar = Local_Tar;
	Parms.Local_Glimpses = Local_Glimpses;
	Parms.Local_Index = Local_Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetCostColor_SlateColor = CallFunc_GetCostColor_SlateColor;
	Parms.CallFunc_GetCostColor_SlateColor_1 = CallFunc_GetCostColor_SlateColor_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.ResetIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetUpgradeButtons_Array                                 (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellDetail_C::ResetIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetUpgradeButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "ResetIcons");

	Params::UShellDetail_C_ResetIcons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetUpgradeButtons_Array = CallFunc_GetUpgradeButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.GetRunesLines
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UUI_ShellUpgradeProgressLine_C*Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeProgressLine_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeProgressLine_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UShellDetail_C::GetRunesLines(int32 Index, class UUI_ShellUpgradeProgressLine_C** Output, TArray<class UUI_ShellUpgradeProgressLine_C*>& K2Node_MakeArray_Array, class UUI_ShellUpgradeProgressLine_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "GetRunesLines");

	Params::UShellDetail_C_GetRunesLines_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function ShellDetail.ShellDetail_C.GetUpgradeButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_ShellUpgradeButton_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UShellDetail_C::GetUpgradeButtons(TArray<class UUI_ShellUpgradeButton_C*>* Array, TArray<class UUI_ShellUpgradeButton_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "GetUpgradeButtons");

	Params::UShellDetail_C_GetUpgradeButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function ShellDetail.ShellDetail_C.UI_Sound_TabSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellDetail_C::UI_Sound_TabSwitch(bool SkipSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "UI_Sound_TabSwitch");

	Params::UShellDetail_C_UI_Sound_TabSwitch_Params Parms{};

	Parms.SkipSound = SkipSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.UpdateTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_IndexTab                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellDetail_C::UpdateTabs(int32 Index, bool SkipSound, bool Local_SkipSound, int32 Local_IndexTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "UpdateTabs");

	Params::UShellDetail_C_UpdateTabs_Params Parms{};

	Parms.Index = Index;
	Parms.SkipSound = SkipSound;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_IndexTab = Local_IndexTab;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.GetTabButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UShellDetail_C::GetTabButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "GetTabButtons");

	Params::UShellDetail_C_GetTabButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function ShellDetail.ShellDetail_C.PlayShowAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::PlayShowAnim(enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, float* Duration, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "PlayShowAnim");

	Params::UShellDetail_C_PlayShowAnim_Params Parms{};

	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function ShellDetail.ShellDetail_C.SetDetails
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellDescription                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShellDetail_C::SetDetails(class FText ShellName, class FText& ShellDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "SetDetails");

	Params::UShellDetail_C_SetDetails_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellDescription = ShellDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.HandleParallax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NormalizedMousePos                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMousePosFromCenterOfScreen_Position                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::HandleParallax(const struct FVector2D& NormalizedMousePos, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "HandleParallax");

	Params::UShellDetail_C_HandleParallax_Params Parms{};

	Parms.NormalizedMousePos = NormalizedMousePos;
	Parms.CallFunc_GetMousePosFromCenterOfScreen_Position = CallFunc_GetMousePosFromCenterOfScreen_Position;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = CallFunc_Multiply_Vector2DFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Portrait_K2Node_ComponentBoundEvent_0_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Portrait_K2Node_ComponentBoundEvent_0_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Portrait_K2Node_ComponentBoundEvent_0_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Portrait_K2Node_ComponentBoundEvent_0_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_Common_01_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_Common_01_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_Common_01_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_Common_01_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_Common_02_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_Common_02_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_Common_02_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_Common_02_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_Common_03_K2Node_ComponentBoundEvent_3_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_Common_03_K2Node_ComponentBoundEvent_3_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_Common_03_K2Node_ComponentBoundEvent_3_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_Common_03_K2Node_ComponentBoundEvent_3_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_01_K2Node_ComponentBoundEvent_4_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_01_K2Node_ComponentBoundEvent_4_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_01_K2Node_ComponentBoundEvent_4_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_01_K2Node_ComponentBoundEvent_4_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_02_K2Node_ComponentBoundEvent_5_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_02_K2Node_ComponentBoundEvent_5_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_02_K2Node_ComponentBoundEvent_5_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_02_K2Node_ComponentBoundEvent_5_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_03_K2Node_ComponentBoundEvent_6_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_03_K2Node_ComponentBoundEvent_6_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_03_K2Node_ComponentBoundEvent_6_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_03_K2Node_ComponentBoundEvent_6_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_04_K2Node_ComponentBoundEvent_7_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_04_K2Node_ComponentBoundEvent_7_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_04_K2Node_ComponentBoundEvent_7_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_04_K2Node_ComponentBoundEvent_7_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_05_K2Node_ComponentBoundEvent_8_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_05_K2Node_ComponentBoundEvent_8_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_05_K2Node_ComponentBoundEvent_8_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_05_K2Node_ComponentBoundEvent_8_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_06_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_06_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_06_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_06_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_07_K2Node_ComponentBoundEvent_10_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Glyph_07_K2Node_ComponentBoundEvent_10_OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Glyph_07_K2Node_ComponentBoundEvent_10_OnButtonHovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Glyph_07_K2Node_ComponentBoundEvent_10_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_13_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_13_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_13_Hovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_13_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShellDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_17_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_17_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_17_Hovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_17_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_18_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_18_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_18_Unhovered__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_18_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "Tick");

	Params::UShellDetail_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature");

	Params::UShellDetail_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.ExecuteUbergraph_ShellDetail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellDetail_C::ExecuteUbergraph_ShellDetail(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index_19, int32 K2Node_ComponentBoundEvent_Index_18, int32 K2Node_ComponentBoundEvent_Index_17, int32 K2Node_ComponentBoundEvent_Index_16, int32 K2Node_ComponentBoundEvent_Index_15, int32 K2Node_ComponentBoundEvent_Index_14, int32 K2Node_ComponentBoundEvent_Index_13, int32 K2Node_ComponentBoundEvent_Index_12, int32 K2Node_ComponentBoundEvent_Index_11, int32 K2Node_ComponentBoundEvent_Index_10, int32 K2Node_ComponentBoundEvent_Index_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "ExecuteUbergraph_ShellDetail");

	Params::UShellDetail_C_ExecuteUbergraph_ShellDetail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Index_19 = K2Node_ComponentBoundEvent_Index_19;
	Parms.K2Node_ComponentBoundEvent_Index_18 = K2Node_ComponentBoundEvent_Index_18;
	Parms.K2Node_ComponentBoundEvent_Index_17 = K2Node_ComponentBoundEvent_Index_17;
	Parms.K2Node_ComponentBoundEvent_Index_16 = K2Node_ComponentBoundEvent_Index_16;
	Parms.K2Node_ComponentBoundEvent_Index_15 = K2Node_ComponentBoundEvent_Index_15;
	Parms.K2Node_ComponentBoundEvent_Index_14 = K2Node_ComponentBoundEvent_Index_14;
	Parms.K2Node_ComponentBoundEvent_Index_13 = K2Node_ComponentBoundEvent_Index_13;
	Parms.K2Node_ComponentBoundEvent_Index_12 = K2Node_ComponentBoundEvent_Index_12;
	Parms.K2Node_ComponentBoundEvent_Index_11 = K2Node_ComponentBoundEvent_Index_11;
	Parms.K2Node_ComponentBoundEvent_Index_10 = K2Node_ComponentBoundEvent_Index_10;
	Parms.K2Node_ComponentBoundEvent_Index_9 = K2Node_ComponentBoundEvent_Index_9;
	Parms.K2Node_ComponentBoundEvent_Index_8 = K2Node_ComponentBoundEvent_Index_8;
	Parms.K2Node_ComponentBoundEvent_Widget_8 = K2Node_ComponentBoundEvent_Widget_8;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.K2Node_ComponentBoundEvent_Widget_7 = K2Node_ComponentBoundEvent_Widget_7;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_ComponentBoundEvent_Widget_6 = K2Node_ComponentBoundEvent_Widget_6;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Widget_5 = K2Node_ComponentBoundEvent_Widget_5;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellDetail.ShellDetail_C.OnMenuBackPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellDetail_C::OnMenuBackPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellDetail_C", "OnMenuBackPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


