#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ch_Patroller_Interface.ch_Patroller_Interface_C
class ICh_Patroller_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICh_Patroller_Interface_C* GetDefaultObj();

	void SetHasSeenPlayer(bool Value);
	void SetHasFoughtPlayer(bool Value);
	void GetHasFoughtPlayer(bool* Result);
	void GetHasSeenPlayer(bool* Result);
	void GetIndicatorPosition(class USceneComponent** IndicatorPosition);
	void GetMapTag(class Abp_MinimapTag_C** MapTag);
	void GetDialogueComponent(class UDialogueComponent** DialogueComponent);
};

}


