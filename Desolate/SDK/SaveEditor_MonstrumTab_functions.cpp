#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C
// (None)

class UClass* USaveEditor_MonstrumTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveEditor_MonstrumTab_C");

	return Clss;
}


// SaveEditor_MonstrumTab_C SaveEditor_MonstrumTab.Default__SaveEditor_MonstrumTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USaveEditor_MonstrumTab_C* USaveEditor_MonstrumTab_C::GetDefaultObj()
{
	static class USaveEditor_MonstrumTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveEditor_MonstrumTab_C*>(USaveEditor_MonstrumTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C.SubExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMonstrumButton_C*           K2Node_DynamicCast_AsMonstrum_Button                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveEditor_MonstrumTab_C::SubExp(class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UMonstrumButton_C* K2Node_DynamicCast_AsMonstrum_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveEditor_MonstrumTab_C", "SubExp");

	Params::USaveEditor_MonstrumTab_C_SubExp_Params Parms{};

	Parms.CallFunc_GetSelectedWidget_ReturnValue = CallFunc_GetSelectedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMonstrum_Button = K2Node_DynamicCast_AsMonstrum_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C.AddExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMonstrumButton_C*           K2Node_DynamicCast_AsMonstrum_Button                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveEditor_MonstrumTab_C::AddExp(class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UMonstrumButton_C* K2Node_DynamicCast_AsMonstrum_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Divide_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveEditor_MonstrumTab_C", "AddExp");

	Params::USaveEditor_MonstrumTab_C_AddExp_Params Parms{};

	Parms.CallFunc_GetSelectedWidget_ReturnValue = CallFunc_GetSelectedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMonstrum_Button = K2Node_DynamicCast_AsMonstrum_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C.ReadMonstrum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SavedSelectedWidget                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMonstrumButton_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMonstrumInfo>       CallFunc_GetAllMonstrumInfo_ReturnValue                          (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMonstrumInfo               CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void USaveEditor_MonstrumTab_C::ReadMonstrum(int32 SavedSelectedWidget, int32 Temp_int_Array_Index_Variable, class UMonstrumButton_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, TArray<struct FMonstrumInfo>& CallFunc_GetAllMonstrumInfo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMonstrumInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveEditor_MonstrumTab_C", "ReadMonstrum");

	Params::USaveEditor_MonstrumTab_C_ReadMonstrum_Params Parms{};

	Parms.SavedSelectedWidget = SavedSelectedWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllMonstrumInfo_ReturnValue = CallFunc_GetAllMonstrumInfo_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USaveEditor_MonstrumTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveEditor_MonstrumTab_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C.BndEvt__PlusExpButton_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USaveEditor_MonstrumTab_C::BndEvt__PlusExpButton_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveEditor_MonstrumTab_C", "BndEvt__PlusExpButton_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C.BndEvt__MinusExpButton_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USaveEditor_MonstrumTab_C::BndEvt__MinusExpButton_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveEditor_MonstrumTab_C", "BndEvt__MinusExpButton_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C.ExecuteUbergraph_SaveEditor_MonstrumTab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USaveEditor_MonstrumTab_C::ExecuteUbergraph_SaveEditor_MonstrumTab(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveEditor_MonstrumTab_C", "ExecuteUbergraph_SaveEditor_MonstrumTab");

	Params::USaveEditor_MonstrumTab_C_ExecuteUbergraph_SaveEditor_MonstrumTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Character = K2Node_DynamicCast_AsGeneric_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


