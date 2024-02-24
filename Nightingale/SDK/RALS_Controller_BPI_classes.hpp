#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass RALS_Controller_BPI.RALS_Controller_BPI_C
class IRALS_Controller_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRALS_Controller_BPI_C* GetDefaultObj();

	void BPI_Get_DebugInfo(class ACharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo);
};

}


