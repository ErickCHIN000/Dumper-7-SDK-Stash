#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ALS_Controller_BPI.ALS_Controller_BPI_C
class IALS_Controller_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IALS_Controller_BPI_C* GetDefaultObj();

	void BPI_Get_DebugInfo(class ACharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo);
};

}


