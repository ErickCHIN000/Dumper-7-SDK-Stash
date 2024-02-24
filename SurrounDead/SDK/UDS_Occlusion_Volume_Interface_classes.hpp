#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UDS_Occlusion_Volume_Interface.UDS_Occlusion_Volume_Interface_C
class IUDS_Occlusion_Volume_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUDS_Occlusion_Volume_Interface_C* GetDefaultObj();

	void Get_Occlusion_Result(bool Weather, bool* Occluded);
};

}


