#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_AVFX_Spell_Base.ANS_AVFX_Spell_Base_C
// (None)

class UClass* UANS_AVFX_Spell_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_AVFX_Spell_Base_C");

	return Clss;
}


// ANS_AVFX_Spell_Base_C ANS_AVFX_Spell_Base.Default__ANS_AVFX_Spell_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_AVFX_Spell_Base_C* UANS_AVFX_Spell_Base_C::GetDefaultObj()
{
	static class UANS_AVFX_Spell_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_AVFX_Spell_Base_C*>(UANS_AVFX_Spell_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_AVFX_Spell_Base.ANS_AVFX_Spell_Base_C.GetSpellAVFXComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    SpellAVFXComp                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    FoundComponent                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UANS_AVFX_Spell_Base_C::GetSpellAVFXComp(class USkeletalMeshComponent* MeshComponent, class UBP_SpellAVFXComponent_C** SpellAVFXComp, class UBP_SpellAVFXComponent_C* FoundComponent, class AActor* Owner, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_AddComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_AVFX_Spell_Base_C", "GetSpellAVFXComp");

	Params::UANS_AVFX_Spell_Base_C_GetSpellAVFXComp_Params Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.FoundComponent = FoundComponent;
	Parms.Owner = Owner;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpellAVFXComp != nullptr)
		*SpellAVFXComp = Parms.SpellAVFXComp;

}


// Function ANS_AVFX_Spell_Base.ANS_AVFX_Spell_Base_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    SpellAVFXComp                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Received_NotifyTick_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInEditorPreview_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    CallFunc_GetSpellAVFXComp_SpellAVFXComp                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_AVFX_Spell_Base_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UBP_SpellAVFXComponent_C* SpellAVFXComp, bool CallFunc_Received_NotifyTick_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_GetSpellAVFXComp_SpellAVFXComp, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_AVFX_Spell_Base_C", "Received_NotifyTick");

	Params::UANS_AVFX_Spell_Base_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;
	Parms.SpellAVFXComp = SpellAVFXComp;
	Parms.CallFunc_Received_NotifyTick_ReturnValue = CallFunc_Received_NotifyTick_ReturnValue;
	Parms.CallFunc_IsInEditorPreview_ReturnValue = CallFunc_IsInEditorPreview_ReturnValue;
	Parms.CallFunc_GetSpellAVFXComp_SpellAVFXComp = CallFunc_GetSpellAVFXComp_SpellAVFXComp;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ANS_AVFX_Spell_Base.ANS_AVFX_Spell_Base_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    SpellAVFXComp                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Received_NotifyEnd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInEditorPreview_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    CallFunc_GetSpellAVFXComp_SpellAVFXComp                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_AVFX_Spell_Base_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UBP_SpellAVFXComponent_C* SpellAVFXComp, bool CallFunc_Received_NotifyEnd_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_GetSpellAVFXComp_SpellAVFXComp, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_AVFX_Spell_Base_C", "Received_NotifyEnd");

	Params::UANS_AVFX_Spell_Base_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.SpellAVFXComp = SpellAVFXComp;
	Parms.CallFunc_Received_NotifyEnd_ReturnValue = CallFunc_Received_NotifyEnd_ReturnValue;
	Parms.CallFunc_IsInEditorPreview_ReturnValue = CallFunc_IsInEditorPreview_ReturnValue;
	Parms.CallFunc_GetSpellAVFXComp_SpellAVFXComp = CallFunc_GetSpellAVFXComp_SpellAVFXComp;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ANS_AVFX_Spell_Base.ANS_AVFX_Spell_Base_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    SpellAVFXComp                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Received_NotifyBegin_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SpellAVFXComponent_C*    CallFunc_GetSpellAVFXComp_SpellAVFXComp                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInEditorPreview_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_AVFX_Spell_Base_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UBP_SpellAVFXComponent_C* SpellAVFXComp, bool CallFunc_Received_NotifyBegin_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_GetSpellAVFXComp_SpellAVFXComp, bool CallFunc_IsInEditorPreview_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_AVFX_Spell_Base_C", "Received_NotifyBegin");

	Params::UANS_AVFX_Spell_Base_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.SpellAVFXComp = SpellAVFXComp;
	Parms.CallFunc_Received_NotifyBegin_ReturnValue = CallFunc_Received_NotifyBegin_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSpellAVFXComp_SpellAVFXComp = CallFunc_GetSpellAVFXComp_SpellAVFXComp;
	Parms.CallFunc_IsInEditorPreview_ReturnValue = CallFunc_IsInEditorPreview_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


