#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_TutorialWidget.ba_TutorialWidget_C
// (Actor)

class UClass* Aba_TutorialWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_TutorialWidget_C");

	return Clss;
}


// ba_TutorialWidget_C ba_TutorialWidget.Default__ba_TutorialWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_TutorialWidget_C* Aba_TutorialWidget_C::GetDefaultObj()
{
	static class Aba_TutorialWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_TutorialWidget_C*>(Aba_TutorialWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_TutorialWidget.ba_TutorialWidget_C.ShowWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_TutorialWidget_C::ShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_TutorialWidget_C", "ShowWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_TutorialWidget.ba_TutorialWidget_C.DetectTutorialEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_TutorialWidget_C::DetectTutorialEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_TutorialWidget_C", "DetectTutorialEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_TutorialWidget.ba_TutorialWidget_C.ExecuteUbergraph_ba_TutorialWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_TutorialWidget_C::ExecuteUbergraph_ba_TutorialWidget(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_TutorialWidget_C", "ExecuteUbergraph_ba_TutorialWidget");

	Params::Aba_TutorialWidget_C_ExecuteUbergraph_ba_TutorialWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_TutorialWidget.ba_TutorialWidget_C.TutorialEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_TutorialWidget_C::TutorialEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_TutorialWidget_C", "TutorialEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


