#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ZoneMasterySummary.WBP_ZoneMasterySummary_C
// (None)

class UClass* UWBP_ZoneMasterySummary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ZoneMasterySummary_C");

	return Clss;
}


// WBP_ZoneMasterySummary_C WBP_ZoneMasterySummary.Default__WBP_ZoneMasterySummary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ZoneMasterySummary_C* UWBP_ZoneMasterySummary_C::GetDefaultObj()
{
	static class UWBP_ZoneMasterySummary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ZoneMasterySummary_C*>(UWBP_ZoneMasterySummary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ZoneMasterySummary.WBP_ZoneMasterySummary_C.BndEvt__WBP_ZoneMasterySummary_Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ZoneMasterySummary_C::BndEvt__WBP_ZoneMasterySummary_Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ZoneMasterySummary_C", "BndEvt__WBP_ZoneMasterySummary_Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ZoneMasterySummary.WBP_ZoneMasterySummary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ZoneMasterySummary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ZoneMasterySummary_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ZoneMasterySummary.WBP_ZoneMasterySummary_C.ExecuteUbergraph_WBP_ZoneMasterySummary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPuzzleDatabase*             CallFunc_GetPuzzleDatabase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_PuzzleCategoryToText_ReturnValue                        (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPuzzleDatabase*             CallFunc_GetPuzzleDatabase_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetPuzzleTypesInZone_OutNames                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPuzzleData*>         CallFunc_GetAllPuzzleDataOfTypeInZone_ReturnValue                (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPuzzleData*>         CallFunc_GetAllSolvedDataOfTypeInZone_ReturnValue                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPuzzleTypeData             CallFunc_GetPuzzleDefaultTypeInfo_ReturnValue                    (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ZoneMasterySummary_C::ExecuteUbergraph_WBP_ZoneMasterySummary(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue, class FText CallFunc_PuzzleCategoryToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue_1, TArray<class FString>& CallFunc_GetPuzzleTypesInZone_OutNames, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class UPuzzleData*>& CallFunc_GetAllPuzzleDataOfTypeInZone_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UPuzzleData*>& CallFunc_GetAllSolvedDataOfTypeInZone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FPuzzleTypeData& CallFunc_GetPuzzleDefaultTypeInfo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_SafeDivide_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ZoneMasterySummary_C", "ExecuteUbergraph_WBP_ZoneMasterySummary");

	Params::UWBP_ZoneMasterySummary_C_ExecuteUbergraph_WBP_ZoneMasterySummary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPuzzleDatabase_ReturnValue = CallFunc_GetPuzzleDatabase_ReturnValue;
	Parms.CallFunc_PuzzleCategoryToText_ReturnValue = CallFunc_PuzzleCategoryToText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPuzzleDatabase_ReturnValue_1 = CallFunc_GetPuzzleDatabase_ReturnValue_1;
	Parms.CallFunc_GetPuzzleTypesInZone_OutNames = CallFunc_GetPuzzleTypesInZone_OutNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAllPuzzleDataOfTypeInZone_ReturnValue = CallFunc_GetAllPuzzleDataOfTypeInZone_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllSolvedDataOfTypeInZone_ReturnValue = CallFunc_GetAllSolvedDataOfTypeInZone_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetPuzzleDefaultTypeInfo_ReturnValue = CallFunc_GetPuzzleDefaultTypeInfo_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ZoneMasterySummary.WBP_ZoneMasterySummary_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ZoneMasterySummary_C*   Caller                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ZoneMasterySummary_C::Clicked__DelegateSignature(class UWBP_ZoneMasterySummary_C* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ZoneMasterySummary_C", "Clicked__DelegateSignature");

	Params::UWBP_ZoneMasterySummary_C_Clicked__DelegateSignature_Params Parms{};

	Parms.Caller = Caller;

	UObject::ProcessEvent(Func, &Parms);

}

}


