#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HiddenPentadNode.WBP_HiddenPentadNode_C
// (None)

class UClass* UWBP_HiddenPentadNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HiddenPentadNode_C");

	return Clss;
}


// WBP_HiddenPentadNode_C WBP_HiddenPentadNode.Default__WBP_HiddenPentadNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HiddenPentadNode_C* UWBP_HiddenPentadNode_C::GetDefaultObj()
{
	static class UWBP_HiddenPentadNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HiddenPentadNode_C*>(UWBP_HiddenPentadNode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HiddenPentadNode.WBP_HiddenPentadNode_C.Set Fulfilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HiddenPentadNode_C::Set_Fulfilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenPentadNode_C", "Set Fulfilled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HiddenPentadNode.WBP_HiddenPentadNode_C.SetUnfulfilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HiddenPentadNode_C::SetUnfulfilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenPentadNode_C", "SetUnfulfilled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HiddenPentadNode.WBP_HiddenPentadNode_C.RelicFoundAnimate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HiddenPentadNode_C::RelicFoundAnimate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenPentadNode_C", "RelicFoundAnimate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HiddenPentadNode.WBP_HiddenPentadNode_C.AllRelicsAnimate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HiddenPentadNode_C::AllRelicsAnimate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenPentadNode_C", "AllRelicsAnimate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HiddenPentadNode.WBP_HiddenPentadNode_C.ExecuteUbergraph_WBP_HiddenPentadNode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HiddenPentadNode_C::ExecuteUbergraph_WBP_HiddenPentadNode(int32 EntryPoint, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_GetEndTime_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenPentadNode_C", "ExecuteUbergraph_WBP_HiddenPentadNode");

	Params::UWBP_HiddenPentadNode_C_ExecuteUbergraph_WBP_HiddenPentadNode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetEndTime_ReturnValue_2 = CallFunc_GetEndTime_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


