#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C
class IBPInterface_TempHudTextProvider_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPInterface_TempHudTextProvider_C* GetDefaultObj();

	void SetMissionDebugText(class FText Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer);
};

}


