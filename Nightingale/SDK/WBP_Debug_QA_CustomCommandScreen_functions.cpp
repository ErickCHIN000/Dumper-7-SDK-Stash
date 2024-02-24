#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C
// (None)

class UClass* UWBP_Debug_QA_CustomCommandScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Debug_QA_CustomCommandScreen_C");

	return Clss;
}


// WBP_Debug_QA_CustomCommandScreen_C WBP_Debug_QA_CustomCommandScreen.Default__WBP_Debug_QA_CustomCommandScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Debug_QA_CustomCommandScreen_C* UWBP_Debug_QA_CustomCommandScreen_C::GetDefaultObj()
{
	static class UWBP_Debug_QA_CustomCommandScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Debug_QA_CustomCommandScreen_C*>(UWBP_Debug_QA_CustomCommandScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.WaterMarkBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandScreen_C::WaterMarkBinding(class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "WaterMarkBinding");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_WaterMarkBinding_Params Parms{};

	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.PopulateCommandList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Debug_QA_CustomCommandButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandScreen_C::PopulateCommandList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Debug_QA_CustomCommandButton_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "PopulateCommandList");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_PopulateCommandList_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.RefreshWaterMarkButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandScreen_C::RefreshWaterMarkButton(class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "RefreshWaterMarkButton");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_RefreshWaterMarkButton_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.AddNewCommandToLayout
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Str_command                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWBP_Debug_QA_CustomCommandButton_C*NewCommand                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Debug_QA_CustomCommandButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandScreen_C::AddNewCommandToLayout(const class FString& Str_command, class UWBP_Debug_QA_CustomCommandButton_C** NewCommand, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWBP_Debug_QA_CustomCommandButton_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "AddNewCommandToLayout");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_AddNewCommandToLayout_Params Parms{};

	Parms.Str_command = Str_command;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCommand != nullptr)
		*NewCommand = Parms.NewCommand;

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.LoadCommandsFromConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              CallFunc_LoadUserCommandsFromConfig_ReturnValue                  (ReferenceParm)

void UWBP_Debug_QA_CustomCommandScreen_C::LoadCommandsFromConfig(TArray<class FString>& CallFunc_LoadUserCommandsFromConfig_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "LoadCommandsFromConfig");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_LoadCommandsFromConfig_Params Parms{};

	Parms.CallFunc_LoadUserCommandsFromConfig_ReturnValue = CallFunc_LoadUserCommandsFromConfig_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.SaveCommandsToConfig
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Commands                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Debug_QA_CustomCommandScreen_C::SaveCommandsToConfig(TArray<class FString>& Commands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "SaveCommandsToConfig");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_SaveCommandsToConfig_Params Parms{};

	Parms.Commands = Commands;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.GetCommandsFromCurrentLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Debug_QA_CustomCommandButton_C*K2Node_DynamicCast_AsWBP_Debug_QA_Custom_Command_Button          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandScreen_C::GetCommandsFromCurrentLayout(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Debug_QA_CustomCommandButton_C* K2Node_DynamicCast_AsWBP_Debug_QA_Custom_Command_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "GetCommandsFromCurrentLayout");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_GetCommandsFromCurrentLayout_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Debug_QA_Custom_Command_Button = K2Node_DynamicCast_AsWBP_Debug_QA_Custom_Command_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.Completed_FBBC404E4BE65FD5D971F6A3CCAFD947
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             Loaded                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Debug_QA_CustomCommandScreen_C::Completed_FBBC404E4BE65FD5D971F6A3CCAFD947(TArray<class UObject*>& Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "Completed_FBBC404E4BE65FD5D971F6A3CCAFD947");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_Completed_FBBC404E4BE65FD5D971F6A3CCAFD947_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_CustomCommandScreen_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_CustomCommandScreen_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_CustomCommandScreen_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_editbox_commandToAdd_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_editbox_commandToAdd_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_editbox_commandToAdd_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_BndEvt__WBP_Debug_QA_CustomCommandScreen_editbox_commandToAdd_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.UserCommandButtonRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandScreen_C::UserCommandButtonRemoved(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "UserCommandButtonRemoved");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_UserCommandButtonRemoved_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_start_profiling_K2Node_ComponentBoundEvent_2_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_start_profiling_K2Node_ComponentBoundEvent_2_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_start_profiling_K2Node_ComponentBoundEvent_2_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllSkills_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllSkills_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllSkills_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_InfStam_1_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_InfStam_1_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_InfStam_1_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_InfStam_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_InfStam_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_InfStam_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_GodMode_K2Node_ComponentBoundEvent_7_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_GodMode_K2Node_ComponentBoundEvent_7_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_GodMode_K2Node_ComponentBoundEvent_7_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllSkills_1_K2Node_ComponentBoundEvent_8_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllSkills_1_K2Node_ComponentBoundEvent_8_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllSkills_1_K2Node_ComponentBoundEvent_8_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.UpdateButtonStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::UpdateButtonStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "UpdateButtonStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_ToggleFrameStats_K2Node_ComponentBoundEvent_9_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_ToggleFrameStats_K2Node_ComponentBoundEvent_9_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_ToggleFrameStats_K2Node_ComponentBoundEvent_9_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_1_K2Node_ComponentBoundEvent_10_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_1_K2Node_ComponentBoundEvent_10_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_1_K2Node_ComponentBoundEvent_10_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_K2Node_ComponentBoundEvent_11_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_K2Node_ComponentBoundEvent_11_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_K2Node_ComponentBoundEvent_11_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableHudNotifications_K2Node_ComponentBoundEvent_12_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableHudNotifications_K2Node_ComponentBoundEvent_12_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableHudNotifications_K2Node_ComponentBoundEvent_12_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_1_K2Node_ComponentBoundEvent_3_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_1_K2Node_ComponentBoundEvent_3_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableGamespaceUI_1_K2Node_ComponentBoundEvent_3_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableInteractHighlighting_K2Node_ComponentBoundEvent_14_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableInteractHighlighting_K2Node_ComponentBoundEvent_14_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_EnableInteractHighlighting_K2Node_ComponentBoundEvent_14_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_Min1Health_K2Node_ComponentBoundEvent_13_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_Min1Health_K2Node_ComponentBoundEvent_13_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_Min1Health_K2Node_ComponentBoundEvent_13_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_AutoRevive_K2Node_ComponentBoundEvent_15_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_AutoRevive_K2Node_ComponentBoundEvent_15_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_AutoRevive_K2Node_ComponentBoundEvent_15_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_ViewRecipeAssets_K2Node_ComponentBoundEvent_16_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_ViewRecipeAssets_K2Node_ComponentBoundEvent_16_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_BU_ViewRecipeAssets_K2Node_ComponentBoundEvent_16_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllValidSkills_K2Node_ComponentBoundEvent_17_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllValidSkills_K2Node_ComponentBoundEvent_17_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "BndEvt__WBP_Debug_QA_CustomCommandScreen_Cheat_GrantAllValidSkills_K2Node_ComponentBoundEvent_17_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.ExecuteUbergraph_WBP_Debug_QA_CustomCommandScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_5                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// struct FGameplayTag                Temp_struct_Variable_6                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWatermarkSubsystem*         CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_9                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_10                                          (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             Temp_object_Variable                                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_CustomEvent_Loaded                                        (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_12                                            (None)
// struct FSkillDataReference         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Debug_QA_CustomCommandButton_C*CallFunc_AddNewCommandToLayout_NewCommand                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_13                                            (None)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_19                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>     CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList             (ReferenceParm)
// TArray<struct FPrimaryAssetId>     CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_20                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GodModeTag_GodModeTag                                   (NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_14                                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_2        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_3        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        K2Node_Select_Default_5                                          (None)
// struct FLinearColor                K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_8                                          (None)
// struct FLinearColor                K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHideFrameStats_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD_NWX_C*                  K2Node_DynamicCast_AsHUD_NWX                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnlockAllSkillReferences_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCodexBaseDataAsset*         K2Node_DynamicCast_AsCodex_Base_Data_Asset                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexSubentry              CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexAssetReference        K2Node_MakeStruct_CodexAssetReference                            (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_GrantCodexEntry_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_15                                            (None)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_4        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_5        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_21                                          (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_11                                         (None)
// struct FLinearColor                K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_13                                         (None)
// struct FLinearColor                K2Node_Select_Default_14                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToggleViewRecipeAssetNames_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXCheatManager*            K2Node_DynamicCast_AsNWXCheat_Manager                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_15                                         (None)
// struct FLinearColor                K2Node_Select_Default_16                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillReferenceContainer    CallFunc_GetSkillUnlockables_OutSkillUnlockables                 (None)
// bool                               CallFunc_GetSkillUnlockables_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Temp_name_Variable                                               (ConstParm, ReferenceParm)
// class UAsyncActionLoadPrimaryAssetList*CallFunc_AsyncLoadPrimaryAssetList_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnlockSkillReference_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUnlockedSkill_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandScreen_C::ExecuteUbergraph_WBP_Debug_QA_CustomCommandScreen(int32 EntryPoint, const struct FGuid& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, bool Temp_bool_Variable_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FGameplayTag& Temp_struct_Variable_6, bool Temp_bool_Variable_3, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_4, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UWatermarkSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_9, const struct FGameplayTag& Temp_struct_Variable_10, bool Temp_bool_Variable_6, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, bool Temp_bool_Variable_7, const struct FLinearColor& Temp_struct_Variable_11, const struct FLinearColor& Temp_struct_Variable_12, bool Temp_bool_Variable_8, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool Temp_bool_Variable_9, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, bool Temp_bool_Variable_10, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, bool Temp_bool_Variable_11, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, bool Temp_bool_Variable_12, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, bool Temp_bool_Variable_13, const struct FLinearColor& Temp_struct_Variable_17, const struct FLinearColor& Temp_struct_Variable_18, TArray<class UObject*>& Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UObject*>& K2Node_CustomEvent_Loaded, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable_12, const struct FSkillDataReference& CallFunc_Array_Get_Item, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText CallFunc_GetText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, int32 K2Node_CustomEvent_index, bool CallFunc_RemoveChildAt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_Debug_QA_CustomCommandButton_C* CallFunc_AddNewCommandToLayout_NewCommand, class FText Temp_text_Variable_13, bool Temp_bool_Variable_14, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable_19, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1, int32 Temp_int_Array_Index_Variable_1, const struct FLinearColor& Temp_struct_Variable_20, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool Temp_bool_Variable_15, const struct FGameplayTag& CallFunc_GodModeTag_GodModeTag, class FText Temp_text_Variable_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_3, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_IsStateActive_ReturnValue_1, class FText K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, class FText K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_IsStateActive_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, const struct FLinearColor& K2Node_Select_Default_6, const struct FLinearColor& K2Node_Select_Default_7, bool CallFunc_ActorHasTag_ReturnValue_1, class FText K2Node_Select_Default_8, const struct FLinearColor& K2Node_Select_Default_9, bool CallFunc_GetHideFrameStats_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue_2, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_3, class AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AHUD_NWX_C* K2Node_DynamicCast_AsHUD_NWX, bool K2Node_DynamicCast_bSuccess_4, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_4, bool CallFunc_IsValid_ReturnValue_4, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_5, bool CallFunc_UnlockAllSkillReferences_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_10, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_6, bool CallFunc_IsValid_ReturnValue_5, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_7, int32 Temp_int_Array_Index_Variable_2, class UObject* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_6, class UCodexBaseDataAsset* K2Node_DynamicCast_AsCodex_Base_Data_Asset, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_7, const struct FCodexSubentry& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FCodexAssetReference& K2Node_MakeStruct_CodexAssetReference, bool CallFunc_Less_IntInt_ReturnValue_2, TScriptInterface<class ICodexTrackerInterface> CallFunc_GrantCodexEntry_self_CastInput, class FText Temp_text_Variable_15, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_4, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_5, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue_3, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue_4, bool Temp_bool_Variable_16, const struct FGameplayTag& Temp_struct_Variable_21, bool CallFunc_IsStateActive_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, class FText K2Node_Select_Default_11, const struct FLinearColor& K2Node_Select_Default_12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_Select_Default_13, const struct FLinearColor& K2Node_Select_Default_14, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_ToggleViewRecipeAssetNames_ReturnValue, class UNWXCheatManager* K2Node_DynamicCast_AsNWXCheat_Manager, bool K2Node_DynamicCast_bSuccess_7, class FText K2Node_Select_Default_15, const struct FLinearColor& K2Node_Select_Default_16, const struct FSkillReferenceContainer& CallFunc_GetSkillUnlockables_OutSkillUnlockables, bool CallFunc_GetSkillUnlockables_ReturnValue, TArray<class FName>& Temp_name_Variable, class UAsyncActionLoadPrimaryAssetList* CallFunc_AsyncLoadPrimaryAssetList_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_8, bool CallFunc_UnlockSkillReference_ReturnValue, bool CallFunc_HasUnlockedSkill_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "ExecuteUbergraph_WBP_Debug_QA_CustomCommandScreen");

	Params::UWBP_Debug_QA_CustomCommandScreen_C_ExecuteUbergraph_WBP_Debug_QA_CustomCommandScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_struct_Variable_17 = Temp_struct_Variable_17;
	Parms.Temp_struct_Variable_18 = Temp_struct_Variable_18;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.K2Node_CustomEvent_index = K2Node_CustomEvent_index;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddNewCommandToLayout_NewCommand = CallFunc_AddNewCommandToLayout_NewCommand;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable_19 = Temp_struct_Variable_19;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList = CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1 = CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_struct_Variable_20 = Temp_struct_Variable_20;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_1 = CallFunc_GetLocalPlayerController_LocalPlayerController_1;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.CallFunc_GodModeTag_GodModeTag = CallFunc_GodModeTag_GodModeTag;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_2 = CallFunc_GetLocalPlayerController_LocalPlayerController_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_3 = CallFunc_GetLocalPlayerController_LocalPlayerController_3;
	Parms.K2Node_DynamicCast_AsBP_Character_1 = K2Node_DynamicCast_AsBP_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Character_2 = K2Node_DynamicCast_AsBP_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;
	Parms.CallFunc_IsStateActive_ReturnValue_1 = CallFunc_IsStateActive_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsStateActive_ReturnValue_2 = CallFunc_IsStateActive_ReturnValue_2;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_GetHideFrameStats_ReturnValue = CallFunc_GetHideFrameStats_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_1 = CallFunc_GetLocalPlayerState_PlayerState_1;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_2 = CallFunc_GetLocalPlayerState_PlayerState_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_3 = CallFunc_GetLocalPlayerState_PlayerState_3;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsHUD_NWX = K2Node_DynamicCast_AsHUD_NWX;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_4 = CallFunc_GetLocalPlayerState_PlayerState_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_5 = CallFunc_GetLocalPlayerState_PlayerState_5;
	Parms.CallFunc_UnlockAllSkillReferences_ReturnValue = CallFunc_UnlockAllSkillReferences_ReturnValue;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_6 = CallFunc_GetLocalPlayerState_PlayerState_6;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_7 = CallFunc_GetLocalPlayerState_PlayerState_7;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsCodex_Base_Data_Asset = K2Node_DynamicCast_AsCodex_Base_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_MakeStruct_CodexAssetReference = K2Node_MakeStruct_CodexAssetReference;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GrantCodexEntry_self_CastInput = CallFunc_GrantCodexEntry_self_CastInput;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_4 = CallFunc_GetLocalPlayerController_LocalPlayerController_4;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_5 = CallFunc_GetLocalPlayerController_LocalPlayerController_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_struct_Variable_21 = Temp_struct_Variable_21;
	Parms.CallFunc_IsStateActive_ReturnValue_3 = CallFunc_IsStateActive_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_ToggleViewRecipeAssetNames_ReturnValue = CallFunc_ToggleViewRecipeAssetNames_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCheat_Manager = K2Node_DynamicCast_AsNWXCheat_Manager;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.CallFunc_GetSkillUnlockables_OutSkillUnlockables = CallFunc_GetSkillUnlockables_OutSkillUnlockables;
	Parms.CallFunc_GetSkillUnlockables_ReturnValue = CallFunc_GetSkillUnlockables_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_AsyncLoadPrimaryAssetList_ReturnValue = CallFunc_AsyncLoadPrimaryAssetList_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_8 = CallFunc_GetLocalPlayerState_PlayerState_8;
	Parms.CallFunc_UnlockSkillReference_ReturnValue = CallFunc_UnlockSkillReference_ReturnValue;
	Parms.CallFunc_HasUnlockedSkill_ReturnValue = CallFunc_HasUnlockedSkill_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandScreen.WBP_Debug_QA_CustomCommandScreen_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandScreen_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandScreen_C", "NewEventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


