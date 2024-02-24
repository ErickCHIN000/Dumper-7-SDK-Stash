#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass an_akAudioNotify_Makarov_Insert_default_magazine.an_akAudioNotify_Makarov_Insert_default_magazine_C
// (None)

class UClass* UAn_akAudioNotify_Makarov_Insert_default_magazine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("an_akAudioNotify_Makarov_Insert_default_magazine_C");

	return Clss;
}


// an_akAudioNotify_Makarov_Insert_default_magazine_C an_akAudioNotify_Makarov_Insert_default_magazine.Default__an_akAudioNotify_Makarov_Insert_default_magazine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAn_akAudioNotify_Makarov_Insert_default_magazine_C* UAn_akAudioNotify_Makarov_Insert_default_magazine_C::GetDefaultObj()
{
	static class UAn_akAudioNotify_Makarov_Insert_default_magazine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAn_akAudioNotify_Makarov_Insert_default_magazine_C*>(UAn_akAudioNotify_Makarov_Insert_default_magazine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function an_akAudioNotify_Makarov_Insert_default_magazine.an_akAudioNotify_Makarov_Insert_default_magazine_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UAk_Component_Base_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAn_akAudioNotify_Makarov_Insert_default_magazine_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, class UAk_Component_Base_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("an_akAudioNotify_Makarov_Insert_default_magazine_C", "Received_Notify");

	Params::UAn_akAudioNotify_Makarov_Insert_default_magazine_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


