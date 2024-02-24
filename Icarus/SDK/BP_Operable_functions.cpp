#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Operable.BP_Operable_C
// (Actor)

class UClass* ABP_Operable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Operable_C");

	return Clss;
}


// BP_Operable_C BP_Operable.Default__BP_Operable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Operable_C* ABP_Operable_C::GetDefaultObj()
{
	static class ABP_Operable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Operable_C*>(ABP_Operable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Operable.BP_Operable_C.EndInputCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InputCaptureComponent_C* CaptureComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Operable_C::EndInputCapture(class UBP_InputCaptureComponent_C* CaptureComponent, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "EndInputCapture");

	Params::ABP_Operable_C_EndInputCapture_Params Parms{};

	Parms.CaptureComponent = CaptureComponent;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Operable.BP_Operable_C.WorldObject_Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Operable_C::WorldObject_Interact(class AActor* Instigator, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "WorldObject_Interact");

	Params::ABP_Operable_C_WorldObject_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Operable.BP_Operable_C.LookX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Operable_C::LookX(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "LookX");

	Params::ABP_Operable_C_LookX_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Operable.BP_Operable_C.LookY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Operable_C::LookY(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "LookY");

	Params::ABP_Operable_C_LookY_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Operable.BP_Operable_C.PrimaryFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Press                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Operable_C::PrimaryFire(bool Press)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "PrimaryFire");

	Params::ABP_Operable_C_PrimaryFire_Params Parms{};

	Parms.Press = Press;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Operable.BP_Operable_C.AltFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Press                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Operable_C::AltFire(bool Press)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "AltFire");

	Params::ABP_Operable_C_AltFire_Params Parms{};

	Parms.Press = Press;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Operable.BP_Operable_C.Jump
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Operable_C::Jump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "Jump");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Operable.BP_Operable_C.BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_InputCaptureComponent_C* CaptureComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Operable_C::BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature(class UBP_InputCaptureComponent_C* CaptureComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature");

	Params::ABP_Operable_C_BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature_Params Parms{};

	Parms.CaptureComponent = CaptureComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Operable.BP_Operable_C.ExecuteUbergraph_BP_Operable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputCaptureComponent_C* K2Node_ComponentBoundEvent_CaptureComponent                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Press_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Press                                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Operable_C::ExecuteUbergraph_BP_Operable(int32 EntryPoint, class UBP_InputCaptureComponent_C* K2Node_ComponentBoundEvent_CaptureComponent, float K2Node_Event_Scale_1, float K2Node_Event_Scale, bool K2Node_Event_Press_1, bool K2Node_Event_Press)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "ExecuteUbergraph_BP_Operable");

	Params::ABP_Operable_C_ExecuteUbergraph_BP_Operable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_CaptureComponent = K2Node_ComponentBoundEvent_CaptureComponent;
	Parms.K2Node_Event_Scale_1 = K2Node_Event_Scale_1;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.K2Node_Event_Press_1 = K2Node_Event_Press_1;
	Parms.K2Node_Event_Press = K2Node_Event_Press;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Operable.BP_Operable_C.OnBeginInteract__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Operable_C::OnBeginInteract__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Operable_C", "OnBeginInteract__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


