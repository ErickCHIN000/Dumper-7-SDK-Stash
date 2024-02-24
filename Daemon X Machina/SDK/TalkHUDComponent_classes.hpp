#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xAA8 - 0xAA0)
// BlueprintGeneratedClass TalkHUDComponent.TalkHUDComponent_C
class UTalkHUDComponent_C : public UTTLTalkHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UTalkHUDComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_TalkHUDComponent(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, uint8 CallFunc_MakeLiteralByte_ReturnValue1, class UDem_talk_top03_C* CallFunc_Create_ReturnValue, class UDem_talk_top00_C* CallFunc_Create_ReturnValue1, uint8 CallFunc_MakeLiteralByte_ReturnValue2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UCmn_parts_fade00_C* CallFunc_Create_ReturnValue2, class UCmn_parts_ka00_C* CallFunc_Create_ReturnValue3);
};

}


