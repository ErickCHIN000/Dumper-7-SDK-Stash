#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Items_Traits.BPFL_Items_Traits_C
// (None)

class UClass* UBPFL_Items_Traits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Items_Traits_C");

	return Clss;
}


// BPFL_Items_Traits_C BPFL_Items_Traits.Default__BPFL_Items_Traits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Items_Traits_C* UBPFL_Items_Traits_C::GetDefaultObj()
{
	static class UBPFL_Items_Traits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Items_Traits_C*>(UBPFL_Items_Traits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Items_Traits.BPFL_Items_Traits_C.GetCharacteristicClass
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UClass* UBPFL_Items_Traits_C::GetCharacteristicClass(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Traits_C", "GetCharacteristicClass");

	Params::UBPFL_Items_Traits_C_GetCharacteristicClass_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Items_Traits.BPFL_Items_Traits_C.GetAllCharacteristics
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCharacteristicDataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class UCharacteristicDataAsset*>Characteristics                                                  (Edit, BlueprintVisible)
// TSet<struct FTopLevelAssetPath>    Temp_struct_Variable                                             (ConstParm)
// TArray<struct FTopLevelAssetPath>  Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<struct FSoftObjectPath>     Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// TArray<class FName>                Temp_name_Variable                                               (ConstParm, ReferenceParm)
// TArray<class FName>                Temp_name_Variable_1                                             (ConstParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class FName>                  Temp_name_Variable_2                                             (ConstParm)
// class UClass*                      CallFunc_GetCharacteristicClass_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FARFilter                   CallFunc_MakeARFilter_ReturnValue                                (None)
// TArray<class UObject*>             CallFunc_GetAllAssetsByFilter_Objects                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacteristicDataAsset*    K2Node_DynamicCast_AsCharacteristic_Data_Asset                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<class UCharacteristicDataAsset*> UBPFL_Items_Traits_C::GetAllCharacteristics(class UObject* __WorldContext, const TArray<class UCharacteristicDataAsset*>& Characteristics, TSet<struct FTopLevelAssetPath> Temp_struct_Variable, TArray<struct FTopLevelAssetPath>& Temp_struct_Variable_1, TArray<struct FSoftObjectPath>& Temp_struct_Variable_2, TArray<class FName>& Temp_name_Variable, TArray<class FName>& Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSet<class FName> Temp_name_Variable_2, class UClass* CallFunc_GetCharacteristicClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, const struct FARFilter& CallFunc_MakeARFilter_ReturnValue, TArray<class UObject*>& CallFunc_GetAllAssetsByFilter_Objects, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UCharacteristicDataAsset* K2Node_DynamicCast_AsCharacteristic_Data_Asset, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Traits_C", "GetAllCharacteristics");

	Params::UBPFL_Items_Traits_C_GetAllCharacteristics_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Characteristics = Characteristics;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_GetCharacteristicClass_ReturnValue = CallFunc_GetCharacteristicClass_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeARFilter_ReturnValue = CallFunc_MakeARFilter_ReturnValue;
	Parms.CallFunc_GetAllAssetsByFilter_Objects = CallFunc_GetAllAssetsByFilter_Objects;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacteristic_Data_Asset = K2Node_DynamicCast_AsCharacteristic_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


