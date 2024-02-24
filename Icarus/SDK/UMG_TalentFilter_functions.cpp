#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentFilter.UMG_TalentFilter_C
// (None)

class UClass* UUMG_TalentFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentFilter_C");

	return Clss;
}


// UMG_TalentFilter_C UMG_TalentFilter.Default__UMG_TalentFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentFilter_C* UUMG_TalentFilter_C::GetDefaultObj()
{
	static class UUMG_TalentFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentFilter_C*>(UUMG_TalentFilter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentFilter.UMG_TalentFilter_C.UpdateTextFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_TalentFilter_C::UpdateTextFilter(class FText TextIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentFilter_C", "UpdateTextFilter");

	Params::UUMG_TalentFilter_C_UpdateTextFilter_Params Parms{};

	Parms.TextIn = TextIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentFilter.UMG_TalentFilter_C.HighlightTalents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FilterQuery                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTalentTreeWidget*>   CallFunc_GetTalentTreeWidgets_ReturnValue                        (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentTreeWidget*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentFilter_C::HighlightTalents(const class FString& FilterQuery, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UTalentTreeWidget*>& CallFunc_GetTalentTreeWidgets_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTalentTreeWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentFilter_C", "HighlightTalents");

	Params::UUMG_TalentFilter_C_HighlightTalents_Params Parms{};

	Parms.FilterQuery = FilterQuery;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTalentTreeWidgets_ReturnValue = CallFunc_GetTalentTreeWidgets_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentFilter.UMG_TalentFilter_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentViewInterface*        View                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowClear                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentFilter_C::Setup(class UTalentViewInterface* View, bool ShowClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentFilter_C", "Setup");

	Params::UUMG_TalentFilter_C_Setup_Params Parms{};

	Parms.View = View;
	Parms.ShowClear = ShowClear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentFilter.UMG_TalentFilter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TalentFilter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentFilter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentFilter.UMG_TalentFilter_C.BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TalentFilter_C::BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentFilter_C", "BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature");

	Params::UUMG_TalentFilter_C_BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentFilter.UMG_TalentFilter_C.BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentFilter_C::BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentFilter_C", "BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature");

	Params::UUMG_TalentFilter_C_BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentFilter.UMG_TalentFilter_C.BndEvt__UMG_TalentFilter_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_TalentFilter_C::BndEvt__UMG_TalentFilter_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentFilter_C", "BndEvt__UMG_TalentFilter_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentFilter.UMG_TalentFilter_C.ExecuteUbergraph_UMG_TalentFilter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentFilter_C::ExecuteUbergraph_UMG_TalentFilter(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentFilter_C", "ExecuteUbergraph_UMG_TalentFilter");

	Params::UUMG_TalentFilter_C_ExecuteUbergraph_UMG_TalentFilter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}

}


