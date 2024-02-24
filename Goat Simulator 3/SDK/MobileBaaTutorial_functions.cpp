#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MobileBaaTutorial.MobileBaaTutorial_C
// (Actor)

class UClass* AMobileBaaTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobileBaaTutorial_C");

	return Clss;
}


// MobileBaaTutorial_C MobileBaaTutorial.Default__MobileBaaTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMobileBaaTutorial_C* AMobileBaaTutorial_C::GetDefaultObj()
{
	static class AMobileBaaTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMobileBaaTutorial_C*>(AMobileBaaTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MobileBaaTutorial.MobileBaaTutorial_C.GetStepOverrideDescriptionArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<class FText> AMobileBaaTutorial_C::GetStepOverrideDescriptionArray(TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobileBaaTutorial_C", "GetStepOverrideDescriptionArray");

	Params::AMobileBaaTutorial_C_GetStepOverrideDescriptionArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MobileBaaTutorial.MobileBaaTutorial_C.GoatBaa
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatBaaing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMobileBaaTutorial_C::GoatBaa(class AGGGoat* GoatBaaing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobileBaaTutorial_C", "GoatBaa");

	Params::AMobileBaaTutorial_C_GoatBaa_Params Parms{};

	Parms.GoatBaaing = GoatBaaing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MobileBaaTutorial.MobileBaaTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMobileBaaTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobileBaaTutorial_C", "OnTutorialActivated");

	Params::AMobileBaaTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MobileBaaTutorial.MobileBaaTutorial_C.ExecuteUbergraph_MobileBaaTutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_GoatBaaing                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMobileBaaTutorial_C::ExecuteUbergraph_MobileBaaTutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatBaaing, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobileBaaTutorial_C", "ExecuteUbergraph_MobileBaaTutorial");

	Params::AMobileBaaTutorial_C_ExecuteUbergraph_MobileBaaTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GoatBaaing = K2Node_CustomEvent_GoatBaaing;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;

	UObject::ProcessEvent(Func, &Parms);

}

}


