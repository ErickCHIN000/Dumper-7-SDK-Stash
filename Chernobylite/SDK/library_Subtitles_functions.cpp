#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass library_Subtitles.library_Subtitles_C
// (None)

class UClass* ULibrary_Subtitles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("library_Subtitles_C");

	return Clss;
}


// library_Subtitles_C library_Subtitles.Default__library_Subtitles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibrary_Subtitles_C* ULibrary_Subtitles_C::GetDefaultObj()
{
	static class ULibrary_Subtitles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibrary_Subtitles_C*>(ULibrary_Subtitles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function library_Subtitles.library_Subtitles_C.Destroy All Sounds Attached To Actor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAudioComponent*>     AudioComponents                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UAudioComponent*>     CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibrary_Subtitles_C::Destroy_All_Sounds_Attached_To_Actor(class AActor* Actor, class UObject* __WorldContext, const TArray<class UAudioComponent*>& AudioComponents, TArray<class UAudioComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("library_Subtitles_C", "Destroy All Sounds Attached To Actor");

	Params::ULibrary_Subtitles_C_Destroy_All_Sounds_Attached_To_Actor_Params Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.AudioComponents = AudioComponents;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function library_Subtitles.library_Subtitles_C.Play Sound Attached To Actor With Subtitles
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Attach_to_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsWhisper                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ActorName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        AttachPointName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bDestroyAllPreviousSounds                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 SubtitleRef                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             SoundRef                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Play_Sound_Attached_With_Subtitles_SubtitleRef          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Play_Sound_Attached_With_Subtitles_SoundRef             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Play_Sound_Attached_With_Subtitles_Duration             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibrary_Subtitles_C::Play_Sound_Attached_To_Actor_With_Subtitles(class USoundBase* Sound, class AActor* Attach_to_Actor, class FText Text, const struct FLinearColor& Color, bool bIsWhisper, class FText ActorName, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool bDestroyAllPreviousSounds, class UObject* __WorldContext, class UUserWidget** SubtitleRef, class UAudioComponent** SoundRef, float* Duration, bool Temp_bool_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* K2Node_Select_Default, class UUserWidget* CallFunc_Play_Sound_Attached_With_Subtitles_SubtitleRef, class UAudioComponent* CallFunc_Play_Sound_Attached_With_Subtitles_SoundRef, float CallFunc_Play_Sound_Attached_With_Subtitles_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("library_Subtitles_C", "Play Sound Attached To Actor With Subtitles");

	Params::ULibrary_Subtitles_C_Play_Sound_Attached_To_Actor_With_Subtitles_Params Parms{};

	Parms.Sound = Sound;
	Parms.Attach_to_Actor = Attach_to_Actor;
	Parms.Text = Text;
	Parms.Color = Color;
	Parms.bIsWhisper = bIsWhisper;
	Parms.ActorName = ActorName;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bDestroyAllPreviousSounds = bDestroyAllPreviousSounds;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Play_Sound_Attached_With_Subtitles_SubtitleRef = CallFunc_Play_Sound_Attached_With_Subtitles_SubtitleRef;
	Parms.CallFunc_Play_Sound_Attached_With_Subtitles_SoundRef = CallFunc_Play_Sound_Attached_With_Subtitles_SoundRef;
	Parms.CallFunc_Play_Sound_Attached_With_Subtitles_Duration = CallFunc_Play_Sound_Attached_With_Subtitles_Duration;

	UObject::ProcessEvent(Func, &Parms);

	if (SubtitleRef != nullptr)
		*SubtitleRef = Parms.SubtitleRef;

	if (SoundRef != nullptr)
		*SoundRef = Parms.SoundRef;

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function library_Subtitles.library_Subtitles_C.Play Sound Attached With Subtitles
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsWhisper                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ActorName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        AttachPointName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 SubtitleRef                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             SoundRef                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitlesManager*           SubtitlesManager                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitlesManager*           CallFunc_GetSubtitlesManager_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_AddWhisper_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitleEntry*              CallFunc_AddSubtitle_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibrary_Subtitles_C::Play_Sound_Attached_With_Subtitles(class USoundBase* Sound, class USceneComponent* AttachToComponent, class FText Text, const struct FLinearColor& Color, bool bIsWhisper, class FText ActorName, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext, class UUserWidget** SubtitleRef, class UAudioComponent** SoundRef, float* Duration, class USubtitlesManager* SubtitlesManager, const class FString& CallFunc_GetObjectName_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USubtitlesManager* CallFunc_GetSubtitlesManager_ReturnValue, class UUserWidget* CallFunc_AddWhisper_ReturnValue, class USubtitleEntry* CallFunc_AddSubtitle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("library_Subtitles_C", "Play Sound Attached With Subtitles");

	Params::ULibrary_Subtitles_C_Play_Sound_Attached_With_Subtitles_Params Parms{};

	Parms.Sound = Sound;
	Parms.AttachToComponent = AttachToComponent;
	Parms.Text = Text;
	Parms.Color = Color;
	Parms.bIsWhisper = bIsWhisper;
	Parms.ActorName = ActorName;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.__WorldContext = __WorldContext;
	Parms.SubtitlesManager = SubtitlesManager;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_GetSubtitlesManager_ReturnValue = CallFunc_GetSubtitlesManager_ReturnValue;
	Parms.CallFunc_AddWhisper_ReturnValue = CallFunc_AddWhisper_ReturnValue;
	Parms.CallFunc_AddSubtitle_ReturnValue = CallFunc_AddSubtitle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SubtitleRef != nullptr)
		*SubtitleRef = Parms.SubtitleRef;

	if (SoundRef != nullptr)
		*SoundRef = Parms.SoundRef;

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function library_Subtitles.library_Subtitles_C.Play Sound At Location With Subtitles
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsWhisper                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ActorName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundAttenuation*           AttenuationSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundConcurrency*           ConcurrencySettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume_Multiplier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 SubtitleRef                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             SoundRef                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitlesManager*           SubtitlesManager                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitlesManager*           CallFunc_GetSubtitlesManager_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_AddWhisper_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitleEntry*              CallFunc_AddSubtitle_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibrary_Subtitles_C::Play_Sound_At_Location_With_Subtitles(class USoundBase* Sound, class FText Text, const struct FLinearColor& Color, bool bIsWhisper, class FText ActorName, const struct FVector& Location, const struct FRotator& Rotation, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, float Volume_Multiplier, class UObject* __WorldContext, class UUserWidget** SubtitleRef, class UAudioComponent** SoundRef, float* Duration, class USubtitlesManager* SubtitlesManager, class USubtitlesManager* CallFunc_GetSubtitlesManager_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UUserWidget* CallFunc_AddWhisper_ReturnValue, class USubtitleEntry* CallFunc_AddSubtitle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("library_Subtitles_C", "Play Sound At Location With Subtitles");

	Params::ULibrary_Subtitles_C_Play_Sound_At_Location_With_Subtitles_Params Parms{};

	Parms.Sound = Sound;
	Parms.Text = Text;
	Parms.Color = Color;
	Parms.bIsWhisper = bIsWhisper;
	Parms.ActorName = ActorName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.ConcurrencySettings = ConcurrencySettings;
	Parms.Volume_Multiplier = Volume_Multiplier;
	Parms.__WorldContext = __WorldContext;
	Parms.SubtitlesManager = SubtitlesManager;
	Parms.CallFunc_GetSubtitlesManager_ReturnValue = CallFunc_GetSubtitlesManager_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_AddWhisper_ReturnValue = CallFunc_AddWhisper_ReturnValue;
	Parms.CallFunc_AddSubtitle_ReturnValue = CallFunc_AddSubtitle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SubtitleRef != nullptr)
		*SubtitleRef = Parms.SubtitleRef;

	if (SoundRef != nullptr)
		*SoundRef = Parms.SoundRef;

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function library_Subtitles.library_Subtitles_C.Play Sound 2D With Subtitles
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsWhisper                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ActorName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Subtitle_Ref                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Sound_Ref                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitlesManager*           SubtitlesManager                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitlesManager*           CallFunc_GetSubtitlesManager_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_AddWhisper_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitleEntry*              CallFunc_AddSubtitle_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibrary_Subtitles_C::Play_Sound_2D_With_Subtitles(class USoundBase* Sound, class FText Text, const struct FLinearColor& Color, bool bIsWhisper, class FText ActorName, class UObject* __WorldContext, class UUserWidget** Subtitle_Ref, class UAudioComponent** Sound_Ref, float* Duration, class USubtitlesManager* SubtitlesManager, class USubtitlesManager* CallFunc_GetSubtitlesManager_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UUserWidget* CallFunc_AddWhisper_ReturnValue, class USubtitleEntry* CallFunc_AddSubtitle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("library_Subtitles_C", "Play Sound 2D With Subtitles");

	Params::ULibrary_Subtitles_C_Play_Sound_2D_With_Subtitles_Params Parms{};

	Parms.Sound = Sound;
	Parms.Text = Text;
	Parms.Color = Color;
	Parms.bIsWhisper = bIsWhisper;
	Parms.ActorName = ActorName;
	Parms.__WorldContext = __WorldContext;
	Parms.SubtitlesManager = SubtitlesManager;
	Parms.CallFunc_GetSubtitlesManager_ReturnValue = CallFunc_GetSubtitlesManager_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_AddWhisper_ReturnValue = CallFunc_AddWhisper_ReturnValue;
	Parms.CallFunc_AddSubtitle_ReturnValue = CallFunc_AddSubtitle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Subtitle_Ref != nullptr)
		*Subtitle_Ref = Parms.Subtitle_Ref;

	if (Sound_Ref != nullptr)
		*Sound_Ref = Parms.Sound_Ref;

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}

}


