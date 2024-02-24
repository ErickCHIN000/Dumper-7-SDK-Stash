#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass library_Subtitles.library_Subtitles_C
class ULibrary_Subtitles_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibrary_Subtitles_C* GetDefaultObj();

	void Destroy_All_Sounds_Attached_To_Actor(class AActor* Actor, class UObject* __WorldContext, const TArray<class UAudioComponent*>& AudioComponents, TArray<class UAudioComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void Play_Sound_Attached_To_Actor_With_Subtitles(class USoundBase* Sound, class AActor* Attach_to_Actor, class FText Text, const struct FLinearColor& Color, bool bIsWhisper, class FText ActorName, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool bDestroyAllPreviousSounds, class UObject* __WorldContext, class UUserWidget** SubtitleRef, class UAudioComponent** SoundRef, float* Duration, bool Temp_bool_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* K2Node_Select_Default, class UUserWidget* CallFunc_Play_Sound_Attached_With_Subtitles_SubtitleRef, class UAudioComponent* CallFunc_Play_Sound_Attached_With_Subtitles_SoundRef, float CallFunc_Play_Sound_Attached_With_Subtitles_Duration);
	void Play_Sound_Attached_With_Subtitles(class USoundBase* Sound, class USceneComponent* AttachToComponent, class FText Text, const struct FLinearColor& Color, bool bIsWhisper, class FText ActorName, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext, class UUserWidget** SubtitleRef, class UAudioComponent** SoundRef, float* Duration, class USubtitlesManager* SubtitlesManager, const class FString& CallFunc_GetObjectName_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USubtitlesManager* CallFunc_GetSubtitlesManager_ReturnValue, class UUserWidget* CallFunc_AddWhisper_ReturnValue, class USubtitleEntry* CallFunc_AddSubtitle_ReturnValue);
	void Play_Sound_At_Location_With_Subtitles(class USoundBase* Sound, class FText Text, const struct FLinearColor& Color, bool bIsWhisper, class FText ActorName, const struct FVector& Location, const struct FRotator& Rotation, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, float Volume_Multiplier, class UObject* __WorldContext, class UUserWidget** SubtitleRef, class UAudioComponent** SoundRef, float* Duration, class USubtitlesManager* SubtitlesManager, class USubtitlesManager* CallFunc_GetSubtitlesManager_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UUserWidget* CallFunc_AddWhisper_ReturnValue, class USubtitleEntry* CallFunc_AddSubtitle_ReturnValue);
	void Play_Sound_2D_With_Subtitles(class USoundBase* Sound, class FText Text, const struct FLinearColor& Color, bool bIsWhisper, class FText ActorName, class UObject* __WorldContext, class UUserWidget** Subtitle_Ref, class UAudioComponent** Sound_Ref, float* Duration, class USubtitlesManager* SubtitlesManager, class USubtitlesManager* CallFunc_GetSubtitlesManager_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UUserWidget* CallFunc_AddWhisper_ReturnValue, class USubtitleEntry* CallFunc_AddSubtitle_ReturnValue);
};

}


