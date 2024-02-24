#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_GridList_FilterContainer.WBP_GuideBook_GridList_FilterContainer_C
// (None)

class UClass* UWBP_GuideBook_GridList_FilterContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_GridList_FilterContainer_C");

	return Clss;
}


// WBP_GuideBook_GridList_FilterContainer_C WBP_GuideBook_GridList_FilterContainer.Default__WBP_GuideBook_GridList_FilterContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_GridList_FilterContainer_C* UWBP_GuideBook_GridList_FilterContainer_C::GetDefaultObj()
{
	static class UWBP_GuideBook_GridList_FilterContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_GridList_FilterContainer_C*>(UWBP_GuideBook_GridList_FilterContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_GridList_FilterContainer.WBP_GuideBook_GridList_FilterContainer_C.UpdateFilters
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CategoryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_GridList_Filter_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMenuDataRelevantFilter>CallFunc_GetRelevantFiltersForCategory_ReturnValue               (ReferenceParm)
// struct FMenuDataRelevantFilter     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_GridList_FilterContainer_C::UpdateFilters(struct FGameplayTag& CategoryTag, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_GuideBook_GridList_Filter_C* CallFunc_Create_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, TArray<struct FMenuDataRelevantFilter>& CallFunc_GetRelevantFiltersForCategory_ReturnValue, const struct FMenuDataRelevantFilter& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_GridList_FilterContainer_C", "UpdateFilters");

	Params::UWBP_GuideBook_GridList_FilterContainer_C_UpdateFilters_Params Parms{};

	Parms.CategoryTag = CategoryTag;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;
	Parms.CallFunc_GetRelevantFiltersForCategory_ReturnValue = CallFunc_GetRelevantFiltersForCategory_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_GridList_FilterContainer.WBP_GuideBook_GridList_FilterContainer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_GridList_FilterContainer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_GridList_FilterContainer_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_GridList_FilterContainer.WBP_GuideBook_GridList_FilterContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_GridList_FilterContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_GridList_FilterContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_GridList_FilterContainer.WBP_GuideBook_GridList_FilterContainer_C.ExecuteUbergraph_WBP_GuideBook_GridList_FilterContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook_1            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_GridList_FilterContainer_C::ExecuteUbergraph_WBP_GuideBook_GridList_FilterContainer(int32 EntryPoint, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook_1, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_GridList_FilterContainer_C", "ExecuteUbergraph_WBP_GuideBook_GridList_FilterContainer");

	Params::UWBP_GuideBook_GridList_FilterContainer_C_ExecuteUbergraph_WBP_GuideBook_GridList_FilterContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook_1 = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook_1;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


