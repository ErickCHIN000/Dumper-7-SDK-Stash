#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ACLPlugin.ACLStatsDumpCommandlet
// (None)

class UClass* UACLStatsDumpCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ACLStatsDumpCommandlet");

	return Clss;
}


// ACLStatsDumpCommandlet ACLPlugin.Default__ACLStatsDumpCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UACLStatsDumpCommandlet* UACLStatsDumpCommandlet::GetDefaultObj()
{
	static class UACLStatsDumpCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UACLStatsDumpCommandlet*>(UACLStatsDumpCommandlet::StaticClass()->DefaultObject);

	return Default;
}


// Class ACLPlugin.AnimCompress_ACLBase
// (None)

class UClass* UAnimCompress_ACLBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimCompress_ACLBase");

	return Clss;
}


// AnimCompress_ACLBase ACLPlugin.Default__AnimCompress_ACLBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimCompress_ACLBase* UAnimCompress_ACLBase::GetDefaultObj()
{
	static class UAnimCompress_ACLBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimCompress_ACLBase*>(UAnimCompress_ACLBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ACLPlugin.AnimCompress_ACL
// (None)

class UClass* UAnimCompress_ACL::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimCompress_ACL");

	return Clss;
}


// AnimCompress_ACL ACLPlugin.Default__AnimCompress_ACL
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimCompress_ACL* UAnimCompress_ACL::GetDefaultObj()
{
	static class UAnimCompress_ACL* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimCompress_ACL*>(UAnimCompress_ACL::StaticClass()->DefaultObject);

	return Default;
}


// Class ACLPlugin.AnimCompress_ACLCustom
// (None)

class UClass* UAnimCompress_ACLCustom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimCompress_ACLCustom");

	return Clss;
}


// AnimCompress_ACLCustom ACLPlugin.Default__AnimCompress_ACLCustom
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimCompress_ACLCustom* UAnimCompress_ACLCustom::GetDefaultObj()
{
	static class UAnimCompress_ACLCustom* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimCompress_ACLCustom*>(UAnimCompress_ACLCustom::StaticClass()->DefaultObject);

	return Default;
}

}


