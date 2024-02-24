#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Glossary.BP_MenuData_CM_GuideBook_Glossary_C
// (None)

class UClass* UBP_MenuData_CM_GuideBook_Glossary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_GuideBook_Glossary_C");

	return Clss;
}


// BP_MenuData_CM_GuideBook_Glossary_C BP_MenuData_CM_GuideBook_Glossary.Default__BP_MenuData_CM_GuideBook_Glossary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_GuideBook_Glossary_C* UBP_MenuData_CM_GuideBook_Glossary_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_GuideBook_Glossary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_GuideBook_Glossary_C*>(UBP_MenuData_CM_GuideBook_Glossary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_GuideBook_Glossary.BP_MenuData_CM_GuideBook_Glossary_C.PostInitialize
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_MenuData_CM_GuideBook_Glossary_C::PostInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Glossary_C", "PostInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuData_CM_GuideBook_Glossary.BP_MenuData_CM_GuideBook_Glossary_C.ExecuteUbergraph_BP_MenuData_CM_GuideBook_Glossary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXResourceGlossarySubsystem*CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FResourceGlossaryData>CallFunc_GetResourceInformation_ReturnValue                      (ReferenceParm)
// struct FResourceGlossaryData       CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Glossary_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Glossary_C::ExecuteUbergraph_BP_MenuData_CM_GuideBook_Glossary(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UNWXResourceGlossarySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FResourceGlossaryData>& CallFunc_GetResourceInformation_ReturnValue, const struct FResourceGlossaryData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UBP_MenuDataEntry_Glossary_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Glossary_C", "ExecuteUbergraph_BP_MenuData_CM_GuideBook_Glossary");

	Params::UBP_MenuData_CM_GuideBook_Glossary_C_ExecuteUbergraph_BP_MenuData_CM_GuideBook_Glossary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetResourceInformation_ReturnValue = CallFunc_GetResourceInformation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


