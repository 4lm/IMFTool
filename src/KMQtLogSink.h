/* Copyright(C) 2016 Björn Stresing, Denis Manthey, Wolfgang Ruppel, Krispin Weiss
 *
 * This program is free software : you can redistribute it and / or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "KM_log.h"
#include "KM_error.h"


namespace Kumu
{

	class KMQtLogSink : public ILogSink {

	public:
		KMQtLogSink();
		virtual ~KMQtLogSink() {}

	private:
		KM_NO_COPY_CONSTRUCT(KMQtLogSink);
		virtual void WriteEntry(const LogEntry &Entry);
	};

} // namespace Kumu
