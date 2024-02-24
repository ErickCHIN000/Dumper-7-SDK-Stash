#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0x42 - 0x38)
// BlueprintGeneratedClass AN_AkEvent_Music.AN_AkEvent_Music_C
class UAN_AkEvent_Music_C : public UAnimNotify
{
public:
	class UAkAudioEvent*                         MusicEvent;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EMusicPriority                    MusicPriority;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForcePlay;                                         // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_AkEvent_Music_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UMusicManager* MusicManager, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_TryPlayStingerWithPriority_ReturnValue, class UMusicManager* CallFunc_Get_Music_Manager_MusicManager, bool CallFunc_IsValid_ReturnValue);
};

}


