#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x42 - 0x28)
// BlueprintGeneratedClass BP_VoiceChatSpeakerEntry_Object.BP_VoiceChatSpeakerEntry_Object_C
class UBP_VoiceChatSpeakerEntry_Object_C : public UObject
{
public:
	class FText                                  SpeakerName;                                       // 0x28(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsPartyMember;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSelf;                                            // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VoiceChatSpeakerEntry_Object_C* GetDefaultObj();

};

}


