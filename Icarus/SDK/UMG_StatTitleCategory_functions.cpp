#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_StatTitleCategory.UMG_StatTitleCategory_C
// (None)

class UClass* UUMG_StatTitleCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_StatTitleCategory_C");

	return Clss;
}


// UMG_StatTitleCategory_C UMG_StatTitleCategory.Default__UMG_StatTitleCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_StatTitleCategory_C* UUMG_StatTitleCategory_C::GetDefaultObj()
{
	static class UUMG_StatTitleCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_StatTitleCategory_C*>(UUMG_StatTitleCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_StatTitleCategory.UMG_StatTitleCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_StatTitleCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitleCategory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StatTitleCategory.UMG_StatTitleCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_StatTitleCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitleCategory_C", "PreConstruct");

	Params::UUMG_StatTitleCategory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatTitleCategory.UMG_StatTitleCategory_C.ExecuteUbergraph_UMG_StatTitleCategory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// struct FStatCategoriesRowHandle    CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FStatCategory               CallFunc_GetStatCategoriesStruct_StatCategories                  (None)
// enum class EValid                  CallFunc_GetStatCategoriesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UUMG_StatTitleCategory_C::ExecuteUbergraph_UMG_StatTitleCategory(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, class FText Temp_text_Variable, const struct FStatCategoriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FStatCategory& CallFunc_GetStatCategoriesStruct_StatCategories, enum class EValid CallFunc_GetStatCategoriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitleCategory_C", "ExecuteUbergraph_UMG_StatTitleCategory");

	Params::UUMG_StatTitleCategory_C_ExecuteUbergraph_UMG_StatTitleCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetStatCategoriesStruct_StatCategories = CallFunc_GetStatCategoriesStruct_StatCategories;
	Parms.CallFunc_GetStatCategoriesStruct_Paths = CallFunc_GetStatCategoriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


