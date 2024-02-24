#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x80 - 0x28)
// BlueprintGeneratedClass BP_ChatboxItem.BP_ChatboxItem_C
class UBP_ChatboxItem_C : public UObject
{
public:
	enum class EChatMessageType                  MessageType;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_354F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FIcarusPlayerChatMessage              PlayerMessage;                                     // 0x40(0x40)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_ChatboxItem_C* GetDefaultObj();

};

}


