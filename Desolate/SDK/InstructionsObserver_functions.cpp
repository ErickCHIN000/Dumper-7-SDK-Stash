#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InstructionsObserver.InstructionsObserver_C
// (None)

class UClass* UInstructionsObserver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstructionsObserver_C");

	return Clss;
}


// InstructionsObserver_C InstructionsObserver.Default__InstructionsObserver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstructionsObserver_C* UInstructionsObserver_C::GetDefaultObj()
{
	static class UInstructionsObserver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstructionsObserver_C*>(UInstructionsObserver_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstructionsObserver.InstructionsObserver_C.SetInstruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInstructionsInfoData       CallFunc_GetInstructionData_result                               (None)
// bool                               CallFunc_GetInstructionData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UInstructionsObserver_C::SetInstruction(class FName ID, bool CallFunc_IsValid_ReturnValue, const struct FInstructionsInfoData& CallFunc_GetInstructionData_result, bool CallFunc_GetInstructionData_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsObserver_C", "SetInstruction");

	Params::UInstructionsObserver_C_SetInstruction_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInstructionData_result = CallFunc_GetInstructionData_result;
	Parms.CallFunc_GetInstructionData_ReturnValue = CallFunc_GetInstructionData_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InstructionsObserver.InstructionsObserver_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInstructionsObserver_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsObserver_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InstructionsObserver.InstructionsObserver_C.ExecuteUbergraph_InstructionsObserver
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstructionsObserver_C::ExecuteUbergraph_InstructionsObserver(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsObserver_C", "ExecuteUbergraph_InstructionsObserver");

	Params::UInstructionsObserver_C_ExecuteUbergraph_InstructionsObserver_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


