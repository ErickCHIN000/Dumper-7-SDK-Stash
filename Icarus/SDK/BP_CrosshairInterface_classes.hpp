#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_CrosshairInterface.BP_CrosshairInterface_C
class IBP_CrosshairInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_CrosshairInterface_C* GetDefaultObj();

	void GetCrosshairAimAlpha(float* AimAlpha);
	void WantsShowCrosshair(bool* bShowCrosshair);
	void WantsBowMode(bool* bWantsBowMode);
};

}


