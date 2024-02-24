#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HairStyle.WBP_HairStyle_C
// (None)

class UClass* UWBP_HairStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HairStyle_C");

	return Clss;
}


// WBP_HairStyle_C WBP_HairStyle.Default__WBP_HairStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HairStyle_C* UWBP_HairStyle_C::GetDefaultObj()
{
	static class UWBP_HairStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HairStyle_C*>(UWBP_HairStyle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HairStyle.WBP_HairStyle_C.HandleHairColorSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_GetEthricIndex_Array_Index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HairStyle_C::HandleHairColorSelection(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_GetEthricIndex_Array_Index, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HairStyle_C", "HandleHairColorSelection");

	Params::UWBP_HairStyle_C_HandleHairColorSelection_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_GetEthricIndex_Array_Index = CallFunc_GetEthricIndex_Array_Index;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HairStyle.WBP_HairStyle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HairStyle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HairStyle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HairStyle.WBP_HairStyle_C.OnValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_HairStyle_C::OnValueChanged(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HairStyle_C", "OnValueChanged");

	Params::UWBP_HairStyle_C_OnValueChanged_Params Parms{};

	Parms.Object = Object;
	Parms.Val = Val;
	Parms.bUseIndex = bUseIndex;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HairStyle.WBP_HairStyle_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_HairStyle_C::CustomEvent(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HairStyle_C", "CustomEvent");

	Params::UWBP_HairStyle_C_CustomEvent_Params Parms{};

	Parms.Object = Object;
	Parms.Val = Val;
	Parms.bUseIndex = bUseIndex;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HairStyle.WBP_HairStyle_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_HairStyle_C::CustomEvent_1(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HairStyle_C", "CustomEvent_1");

	Params::UWBP_HairStyle_C_CustomEvent_1_Params Parms{};

	Parms.Object = Object;
	Parms.Val = Val;
	Parms.bUseIndex = bUseIndex;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HairStyle.WBP_HairStyle_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_HairStyle_C::CustomEvent_2(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HairStyle_C", "CustomEvent_2");

	Params::UWBP_HairStyle_C_CustomEvent_2_Params Parms{};

	Parms.Object = Object;
	Parms.Val = Val;
	Parms.bUseIndex = bUseIndex;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HairStyle.WBP_HairStyle_C.ExecuteUbergraph_WBP_HairStyle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          K2Node_Select_Default                                            (NoDestructor)
// class UObject*                     K2Node_CustomEvent_Object_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Val_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseIndex_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID_3                                          (ZeroConstructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Object_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Val_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseIndex_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID_2                                          (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Object_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Val_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseIndex_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID_1                                          (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Object                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Val                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HairStyle_C::ExecuteUbergraph_WBP_HairStyle(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 Temp_byte_Variable, const struct FCustomizationData& K2Node_Select_Default, class UObject* K2Node_CustomEvent_Object_3, int32 K2Node_CustomEvent_Val_3, bool K2Node_CustomEvent_bUseIndex_3, const class FString& K2Node_CustomEvent_ID_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UObject* K2Node_CustomEvent_Object_2, int32 K2Node_CustomEvent_Val_2, bool K2Node_CustomEvent_bUseIndex_2, const class FString& K2Node_CustomEvent_ID_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, class UObject* K2Node_CustomEvent_Object_1, int32 K2Node_CustomEvent_Val_1, bool K2Node_CustomEvent_bUseIndex_1, const class FString& K2Node_CustomEvent_ID_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UObject* K2Node_CustomEvent_Object, int32 K2Node_CustomEvent_Val, bool K2Node_CustomEvent_bUseIndex, const class FString& K2Node_CustomEvent_ID, uint8 CallFunc_Conv_IntToByte_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HairStyle_C", "ExecuteUbergraph_WBP_HairStyle");

	Params::UWBP_HairStyle_C_ExecuteUbergraph_WBP_HairStyle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Object_3 = K2Node_CustomEvent_Object_3;
	Parms.K2Node_CustomEvent_Val_3 = K2Node_CustomEvent_Val_3;
	Parms.K2Node_CustomEvent_bUseIndex_3 = K2Node_CustomEvent_bUseIndex_3;
	Parms.K2Node_CustomEvent_ID_3 = K2Node_CustomEvent_ID_3;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Object_2 = K2Node_CustomEvent_Object_2;
	Parms.K2Node_CustomEvent_Val_2 = K2Node_CustomEvent_Val_2;
	Parms.K2Node_CustomEvent_bUseIndex_2 = K2Node_CustomEvent_bUseIndex_2;
	Parms.K2Node_CustomEvent_ID_2 = K2Node_CustomEvent_ID_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.K2Node_CustomEvent_Object_1 = K2Node_CustomEvent_Object_1;
	Parms.K2Node_CustomEvent_Val_1 = K2Node_CustomEvent_Val_1;
	Parms.K2Node_CustomEvent_bUseIndex_1 = K2Node_CustomEvent_bUseIndex_1;
	Parms.K2Node_CustomEvent_ID_1 = K2Node_CustomEvent_ID_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Object = K2Node_CustomEvent_Object;
	Parms.K2Node_CustomEvent_Val = K2Node_CustomEvent_Val;
	Parms.K2Node_CustomEvent_bUseIndex = K2Node_CustomEvent_bUseIndex;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


