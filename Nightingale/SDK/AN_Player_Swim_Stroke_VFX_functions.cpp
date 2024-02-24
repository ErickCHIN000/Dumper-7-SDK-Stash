#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Player_Swim_Stroke_VFX.AN_Player_Swim_Stroke_VFX_C
// (None)

class UClass* UAN_Player_Swim_Stroke_VFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Player_Swim_Stroke_VFX_C");

	return Clss;
}


// AN_Player_Swim_Stroke_VFX_C AN_Player_Swim_Stroke_VFX.Default__AN_Player_Swim_Stroke_VFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Player_Swim_Stroke_VFX_C* UAN_Player_Swim_Stroke_VFX_C::GetDefaultObj()
{
	static class UAN_Player_Swim_Stroke_VFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Player_Swim_Stroke_VFX_C*>(UAN_Player_Swim_Stroke_VFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_Player_Swim_Stroke_VFX.AN_Player_Swim_Stroke_VFX_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_Player_Swim_Stroke_VFX_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Player_Swim_Stroke_VFX_C", "Received_Notify");

	Params::UAN_Player_Swim_Stroke_VFX_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


