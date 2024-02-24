#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DebugModeStateComponent.BP_DebugModeStateComponent_C
// (None)

class UClass* UBP_DebugModeStateComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DebugModeStateComponent_C");

	return Clss;
}


// BP_DebugModeStateComponent_C BP_DebugModeStateComponent.Default__BP_DebugModeStateComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DebugModeStateComponent_C* UBP_DebugModeStateComponent_C::GetDefaultObj()
{
	static class UBP_DebugModeStateComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DebugModeStateComponent_C*>(UBP_DebugModeStateComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DebugModeStateComponent.BP_DebugModeStateComponent_C.IsModeActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_DebugModes            Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsModeActive                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNthBitValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeStateComponent_C::IsModeActive(enum class E_DebugModes Mode, bool* IsModeActive, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_GetNthBitValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeStateComponent_C", "IsModeActive");

	Params::UBP_DebugModeStateComponent_C_IsModeActive_Params Parms{};

	Parms.Mode = Mode;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetNthBitValue_ReturnValue = CallFunc_GetNthBitValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsModeActive != nullptr)
		*IsModeActive = Parms.IsModeActive;

}


// Function BP_DebugModeStateComponent.BP_DebugModeStateComponent_C.ToggleMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_DebugModes            Bit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ModeString                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsModeActive_IsModeActive                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Not_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Or_IntInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeStateComponent_C::ToggleMode(enum class E_DebugModes Bit, const class FString& ModeString, bool CallFunc_IsModeActive_IsModeActive, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Not_Int_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue, int32 CallFunc_Or_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeStateComponent_C", "ToggleMode");

	Params::UBP_DebugModeStateComponent_C_ToggleMode_Params Parms{};

	Parms.Bit = Bit;
	Parms.ModeString = ModeString;
	Parms.CallFunc_IsModeActive_IsModeActive = CallFunc_IsModeActive_IsModeActive;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Not_Int_ReturnValue = CallFunc_Not_Int_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
	Parms.CallFunc_Or_IntInt_ReturnValue = CallFunc_Or_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


