#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_AkEvent_Music.AN_AkEvent_Music_C
// (None)

class UClass* UAN_AkEvent_Music_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_AkEvent_Music_C");

	return Clss;
}


// AN_AkEvent_Music_C AN_AkEvent_Music.Default__AN_AkEvent_Music_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_AkEvent_Music_C* UAN_AkEvent_Music_C::GetDefaultObj()
{
	static class UAN_AkEvent_Music_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_AkEvent_Music_C*>(UAN_AkEvent_Music_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_AkEvent_Music.AN_AkEvent_Music_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               MusicManager                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryPlayStingerWithPriority_ReturnValue                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               CallFunc_Get_Music_Manager_MusicManager                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_AkEvent_Music_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UMusicManager* MusicManager, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_TryPlayStingerWithPriority_ReturnValue, class UMusicManager* CallFunc_Get_Music_Manager_MusicManager, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_AkEvent_Music_C", "Received_Notify");

	Params::UAN_AkEvent_Music_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.MusicManager = MusicManager;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_TryPlayStingerWithPriority_ReturnValue = CallFunc_TryPlayStingerWithPriority_ReturnValue;
	Parms.CallFunc_Get_Music_Manager_MusicManager = CallFunc_Get_Music_Manager_MusicManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


