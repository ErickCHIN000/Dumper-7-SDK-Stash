#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PS_VLA.BPAnim_PS_VLA_C
// (None)

class UClass* UBPAnim_PS_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PS_VLA_C");

	return Clss;
}


// BPAnim_PS_VLA_C BPAnim_PS_VLA.Default__BPAnim_PS_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PS_VLA_C* UBPAnim_PS_VLA_C::GetDefaultObj()
{
	static class UBPAnim_PS_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PS_VLA_C*>(UBPAnim_PS_VLA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.UpdateMagIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BaseWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_PS_VLA_C::UpdateMagIdle(float BaseWeapon, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "UpdateMagIdle");

	Params::UBPAnim_PS_VLA_C_UpdateMagIdle_Params Parms{};

	Parms.BaseWeapon = BaseWeapon;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.UpdateIdleAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UseMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_PS_VLA_C::UpdateIdleAnim(int32 UseMode, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "UpdateIdleAnim");

	Params::UBPAnim_PS_VLA_C_UpdateIdleAnim_Params Parms{};

	Parms.UseMode = UseMode;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_5775BCCE4BBC278F6ADA658BC08914B8
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_5775BCCE4BBC278F6ADA658BC08914B8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_5775BCCE4BBC278F6ADA658BC08914B8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_LayeredBoneBlend_E8D15BF34B5ED634B204D7AAD7644C13
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_LayeredBoneBlend_E8D15BF34B5ED634B204D7AAD7644C13()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_LayeredBoneBlend_E8D15BF34B5ED634B204D7AAD7644C13");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_F3B7A5A847CA3B86C31549A4B00B2D89
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_F3B7A5A847CA3B86C31549A4B00B2D89()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_F3B7A5A847CA3B86C31549A4B00B2D89");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_725558354C219365B9D739801201BCA3
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_725558354C219365B9D739801201BCA3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_725558354C219365B9D739801201BCA3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_36DA10BA418E27BC8989DBB463E09580
// (BlueprintEvent)
// Parameters:

void UBPAnim_PS_VLA_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_36DA10BA418E27BC8989DBB463E09580()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_36DA10BA418E27BC8989DBB463E09580");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_PS_VLA_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_PS_VLA_C::BlueprintSwitchedMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "BlueprintSwitchedMode");

	Params::UBPAnim_PS_VLA_C_BlueprintSwitchedMode_Params Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.CheckClipIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPAnim_PS_VLA_C::CheckClipIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "CheckClipIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_PS_VLA.BPAnim_PS_VLA_C.ExecuteUbergraph_BPAnim_PS_VLA
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_Event_NewMode                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponClipReloadComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_PS_VLA_C::ExecuteUbergraph_BPAnim_PS_VLA(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_NewMode, float CallFunc_GetValueOfAttribute_ReturnValue, class UWeaponClipReloadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PS_VLA_C", "ExecuteUbergraph_BPAnim_PS_VLA");

	Params::UBPAnim_PS_VLA_C_ExecuteUbergraph_BPAnim_PS_VLA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_NewMode = K2Node_Event_NewMode;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


