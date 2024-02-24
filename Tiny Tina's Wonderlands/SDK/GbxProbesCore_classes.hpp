#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GbxProbesCore.GbxProbeInterface
class IGbxProbeInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxProbeInterface* GetDefaultObj();

	void GetGbxProbeId(struct FGbxProbeId* OutId);
};

}


